#include<bits/stdc++.h>
using namespace std;
queue<pair<long long int,long long int> >q;
map<long long int,long long int>mp[1001];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i,r,t;
    pair<long long int,long long int>pq[3],p;
    for(i=0; i<3; i++)
    {
        cin>>pq[i].second>>pq[i].first;
    }
    sort(pq,pq+3);
    r=max(pq[0].second,pq[1].second);
    t=min(pq[0].second,pq[1].second);
    for(i=t; i<=r; i++)
    {
        q.push(make_pair(i,pq[1].first));
        mp[i][pq[1].first]=1;
    }
    r=max(pq[2].second,pq[1].second);
    t=min(pq[2].second,pq[1].second);
    for(i=t; i<=r; i++)
    {
        if(mp[i][pq[1].first]==0)
        {
            q.push(make_pair(i,pq[1].first));
            mp[i][pq[1].first]=1;
        }
    }
    r=max(pq[1].first,pq[2].first);
    t=min(pq[1].first,pq[2].first);
    for(i=t;i<=r;i++)
    {
        if(mp[pq[2].second][i]==0)
        {
            mp[pq[2].second][i]=1;
            q.push(make_pair(pq[2].second,i));
        }
    }
    r=max(pq[1].first,pq[0].first);
    t=min(pq[1].first,pq[0].first);
    for(i=t;i<=r;i++)
    {
        if(mp[pq[0].second][i]==0)
        {
            mp[pq[0].second][i]=1;
            q.push(make_pair(pq[0].second,i));
        }
    }
    cout<<q.size()<<endl;
    while(!q.empty())
    {
      p=q.front();
      q.pop();
      cout<<p.first<<" "<<p.second<<endl;
    }

}