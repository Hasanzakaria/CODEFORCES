#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,o,i,r,t,flag=0;
    cin>>n>>o;
    long long int ara[n-1];
    long long int tak[n-1],ans[n];
    for(i=0;i<n-1;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n-1;i++)
    {
        cin>>tak[i];
    }
    ans[0]=0;
    for(i=1;i<n;i++)
    {
      r=ans[i-1]+ara[i-1];
      if(flag)
      {
          t=ans[i-1]+tak[i-1];
      }
      else
      {
          t=ans[i-1]+tak[i-1]+o;
      }
      ans[i]=min(r,t);
      if(ans[i]==t)
      {
         flag=1;
      }
      else
      {
          flag=0;
      }
    }
    for(i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}