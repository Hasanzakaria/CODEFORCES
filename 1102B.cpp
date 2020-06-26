#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp,cp;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,i,l=-1;
    cin>>n>>m;
    long long int ara[n],tp[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        mp[ara[i]]++;
        l=max(l,mp[ara[i]]);
    }
    if(l>m)
    {
        cout<<"NO\n";
    }
    else
    {
        for(i=0; i<n; i++)
        {
            tp[i]=mp[ara[i]];
            mp[ara[i]]--;
        }
        l++;
        for(i=0; i<n; i++)
        {
            if(cp[tp[i]]==1&&l<=m)
            {
                tp[i]=l;
                l++;
                continue;
            }
            cp[tp[i]]=1;
        }
        cout<<"YES\n";
        for(i=0; i<n; i++)
        {
            cout<<tp[i]<<" ";
        }
    }


}