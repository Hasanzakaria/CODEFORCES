#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]==4)
        {
            mp[ara[i]]++;
        }
        else if(ara[i]==8)
        {
            mp[ara[i]]=min(mp[ara[i]]+1,mp[4]);
        }
        else if(ara[i]==15)
        {
             mp[ara[i]]=min(mp[ara[i]]+1,mp[8]);
        }
        else if(ara[i]==16)
        {
           mp[ara[i]]=min(mp[ara[i]]+1,mp[15]);
        }
        else if(ara[i]==23)
        {
           mp[ara[i]]=min(mp[ara[i]]+1,mp[16]);
        }
        else
        {
           mp[ara[i]]=min(mp[ara[i]]+1,mp[23]);
        }
    }
    cout<<n-(6*mp[42]);
}