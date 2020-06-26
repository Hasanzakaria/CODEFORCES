#include<bits/stdc++.h>
using namespace std;
long long int ara[100001];
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,t,i,f;
    cin>>n>>t;
    for(i=1;i<=t;i++)
    {
        cin>>f;
        ara[f]++;
        mp[ara[f]]++;
        if(mp[ara[f]]==n)
        {
            cout<<1;
        }
        else
        {
            cout<<0;
        }
    }
}