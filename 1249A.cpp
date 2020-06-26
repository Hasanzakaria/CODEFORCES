#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,ans,u=2,e=1;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        ans=0;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            mp[ara[j]]=1;
        }
        for(j=0;j<a;j++)
        {
            if(mp[ara[j]-1]==1||mp[ara[j]+1]==1)
            {
                ans=max(ans,u);
            }
            else
            {
                ans=max(ans,e);
            }
        }
        cout<<ans<<"\n";
        mp.clear();
    }
}