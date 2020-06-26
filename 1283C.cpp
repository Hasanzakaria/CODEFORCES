#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
set<long long int>s;
set<long long int>::iterator l;
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
        mp[ara[i]]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(mp[i]==0)
        {
            s.insert(i);
        }
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]==0)
        {
            l=s.find(i+1);
            if(l!=s.end())
            {
                s.erase(i+1);
                l=s.begin();
                ara[i]=*l;
                s.erase(*l);
                s.insert(i+1);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]==0)
        {
            ara[i]=*(s.begin());
            s.erase(*(s.begin()));
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<ara[i]<<" ";
    }
    cout<<"\n";
}