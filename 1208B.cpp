#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
set<long long int>s,p;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,maxx=-1,j,t;
    cin>>n;
    long long int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        mp[ara[i]]++;
        s.insert(ara[i]);
    }
    p=s;
    for(i=0; i<n; i++)
    {
        for(j=i; j<n; j++)
        {
            if(s.size()==n-(j-i))
            {
                t=s.size();
                maxx=max(maxx,t);
            }
            mp[ara[j]]--;
            if(mp[ara[j]]==0)
            {
                s.erase(ara[j]);
            }
        }
        if(s.size()==n-(j-i))
        {
            t=s.size();
            maxx=max(maxx,t);
        }
        for(j=i;j<n;j++)
        {
            mp[ara[j]]++;
        }
        s=p;
    }
    cout<<n-maxx<<"\n";


}