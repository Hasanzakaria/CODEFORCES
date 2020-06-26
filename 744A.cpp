#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[1001],p;
vector<long long int>::iterator l,ll;
bool vis[1001];
map<long long int,long long int>mp[1001];
void bfs(long long int r)
{
    long long int t,u;
    queue<long long int>q;
    vis[r]=1;
    q.push(r);
    p.push_back(r);
    while(!q.empty())
    {
       t=q.front();
       q.pop();
       for(l=v[t].begin();l!=v[t].end();l++)
       {
         u=*l;
         if(vis[u]==0)
         {
             vis[u]=1;
             q.push(u);
             p.push_back(u);
         }
       }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,k,i,a,b,t,f,r,cou,ans=0,temp,o=-1,nas;
    cin>>n>>m>>k;
    long long int ara[k];
    for(i=0;i<k;i++)
    {
        cin>>ara[i];
    }
    pair<long long int,long long int>pq[m];
    for(i=1;i<=m;i++)
    {
       cin>>a>>b;
       pq[i-1].first=a;
       pq[i-1].second=b;
       v[a].push_back(b);
       v[b].push_back(a);
    }
    for(i=0;i<k;i++)
    {
        cou=0;
        bfs(ara[i]);
        t=p.size();
        o=max(o,t);
        for(l=p.begin();l!=p.end();l++)
        {
          f=*l;
          for(ll=v[f].begin();ll!=v[f].end();ll++)
          {
             r=*ll;
             if(mp[f][r]==0)
             {
                 mp[f][r]=1;
                 mp[r][f]=1;
                 cou++;
             }
          }
        }
        temp=(t*(t-1))/2;
        ans+=(temp-cou);
        p.clear();
    }
    temp=0;
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            temp++;
        }
    }
    nas=o+(temp-1);
    nas=(nas*(nas+1))/2;
    nas=nas-((o*(o-1))/2);
    for(i=0;i<m;i++)
    {
        if(vis[pq[i].first]==0)
        {
            nas--;
        }
    }
    cout<<ans+nas<<"\n";

}