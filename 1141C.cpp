#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum=0,t,f,u,flag=0;
    cin>>n;
    long long int ara[n-1],ans[n],araa[n-1];
    for(i=0;i<n-1;i++)
    {
        cin>>ara[i];
        araa[i]=ara[i];
    }
    sum=ara[0];
    for(i=1;i<n-1;i++)
    {
        ara[i]+=ara[i-1];
        sum+=ara[i];
    }
    t=(n*(n+1))/2;
    f=(t-sum)/n;
    ans[0]=f;
    mp[f]=1;
    if(f>n||f<1)
    {
        flag=1;
    }
    for(i=1;i<n;i++)
    {
      u=araa[i-1]+ans[i-1];
      if(mp[u]==1)
      {
          flag=1;
          break;
      }
      if(u>=1&&u<=n)
      {
          mp[u]=1;
          ans[i]=u;
      }
      else
      {
          flag=1;
          break;
      }
    }
    if(flag==0)
    {
        for(i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
    }
    else
    {
        cout<<-1<<"\n";
    }

}