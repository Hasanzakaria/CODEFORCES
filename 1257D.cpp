#include<bits/stdc++.h>
using namespace std;
pair<long long int,long long int>pq[200000];
long long int dp[200000];
long long int l;
long long int lower(long long int key)
{
    long long int low=0,high=l-1,mid;
    while(low<=high)
    {
      mid=(low+high)/2;
      if(key>pq[mid].first)
      {
          low=mid+1;
      }
      else
      {
          high=mid-1;
      }
    }
    return low;

}
int main ()
{
    long long int t,i,a,j,maxx,cou,m,flag,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        maxx=-1;
        flag=0;
        cou=0;
        ans=0;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        cin>>l;
        for(j=0;j<l;j++)
        {
            cin>>pq[j].first>>pq[j].second;
        }
        sort(pq,pq+l);
        dp[l-1]=pq[l-1].second;
        for(j=l-2;j>=0;j--)
        {
            dp[j]=max(pq[j].second,dp[j+1]);
        }
        for(j=0;j<a;j++)
        {
           maxx=max(maxx,ara[j]);
           cou++;
           m=lower(maxx);
           if(m==l)
           {
              flag=1;
              break;
           }
           if(dp[m]<cou)
           {
              ans++;
              cou=1;
              maxx=ara[j];
           }
        }
        if(flag)
        {
            cout<<-1<<"\n";
        }
        else
        {
            cout<<ans+1<<"\n";
        }
        
    }
}