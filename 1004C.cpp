#include<bits/stdc++.h>
using namespace std;
map<int,int>mp,dp;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,cou=0,ans=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=n-1;i>=0;i--)
    {
       ans+=(cou-dp[ara[i]]);
       dp[ara[i]]=cou;
       if(mp[ara[i]]==0)
       {
           mp[ara[i]]=1;
           cou++;
       }
    }
    cout<<ans<<endl;

}