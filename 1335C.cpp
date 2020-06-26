#include<bits/stdc++.h>
using namespace std;
set<long long int>s;
set<long long int>::iterator l;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,n,j,x,maxx,u;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        maxx=-1;
        cin>>n;
        long long int ara[n];
        for(j=0;j<n;j++)
        {
            cin>>ara[j];
            mp[ara[j]]++;
        }
        for(j=0;j<n;j++)
        {
          s.insert(ara[j]);
        }
        for(l=s.begin();l!=s.end();l++)
        {
            x=*l;
            maxx=max(maxx,mp[x]);
        }
        u=s.size();
        cout<<max(min(u,maxx-1),min(maxx,u-1))<<"\n";
        mp.clear();
        s.clear();
    }

}