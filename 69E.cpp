#include<bits/stdc++.h>
using namespace std;
set<long long int>s;
set<long long int>::iterator u;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,i,f=0;
    cin>>n>>k;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n;i++)
    {
        if(i<k-1)
        {
            mp[ara[i]]++;
            if(mp[ara[i]]==1)
            {
                s.insert(ara[i]);
            }
            else if(mp[ara[i]]==2)
            {
                s.erase(ara[i]);
            }
        }
        else if(i==k-1)
        {
            mp[ara[i]]++;
            if(mp[ara[i]]==1)
            {
                s.insert(ara[i]);
            }
            else if(mp[ara[i]]==2)
            {
                s.erase(ara[i]);
            }
            if(s.size()>0)
            {
                u=s.end();
                u--;
                cout<<*u<<"\n";
            }
            else
            {
                cout<<"Nothing\n";
            }
        }
        else
        {
            mp[ara[f]]--;
            if(mp[ara[f]]==1)
            {
                s.insert(ara[f]);
            }
            else if(mp[ara[f]]==0)
            {
                s.erase(ara[f]);
            }
            mp[ara[i]]++;
            if(mp[ara[i]]==1)
            {
                s.insert(ara[i]);
            }
            else if(mp[ara[i]]==2)
            {
                s.erase(ara[i]);
            }
            if(s.size()>0)
            {
                u=s.end();
                u--;
                cout<<*u<<"\n";
            }
            else
            {
                cout<<"Nothing\n";
            }
            f++;
        }
    }
}