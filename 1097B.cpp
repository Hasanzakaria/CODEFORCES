#include<bits/stdc++.h>
using namespace std;
int ara[20],t,n,dip[20][10000];
int dp(int i,int sum)
{
    if(i==n)
    {
      if((sum%360)==((t-sum)%360))
      {
          return 1;
      }
      return 0;
    }
    if(dip[i][sum]!=-1)
    {
        return dip[i][sum];
    }
    int l,f;
    l=dp(i+1,sum+ara[i]);
    f=dp(i+1,sum);
    dip[i][sum]=l||f;
    return dip[i][sum];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    memset(dip,-1,sizeof(dip));
    int i,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        t+=ara[i];
    }
    k=dp(0,0);
    if(k==1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}