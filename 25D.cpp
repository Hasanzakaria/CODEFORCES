#include<bits/stdc++.h>
using namespace std;
vector<long long int>edge[1001];
bool vis[1001];
vector<long long int>v;
map<long long int,long long int>mp[1001];
vector<pair<long long int,long long int> >x;
vector<pair<long long int,long long int> >::iterator qq;
void bfs(long long int r)
{
    long long int u,i,f;
    queue<long long int>q;
    vis[r]=1;
    q.push(r);
    while(!q.empty())
    {
       u=q.front();
       q.pop();
       for(i=0;i<edge[u].size();i++)
       {
           f=edge[u][i];
           if(vis[f]==0)
           {
               vis[f]=1;
               q.push(f);
               mp[u][f]=1;
               mp[f][u]=1;
           }
       }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i;
    cin>>n;
    pair<long long int,long long int>pq[n-1];
    for(i=1;i<n;i++)
    {
        cin>>pq[i-1].first>>pq[i-1].second;
        edge[pq[i-1].first].push_back(pq[i-1].second);
        edge[pq[i-1].second].push_back(pq[i-1].first);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            bfs(i);
            v.push_back(i);
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(mp[pq[i].first][pq[i].second]==0)
        {
            x.push_back(make_pair(pq[i].first,pq[i].second));
        }
    }
    qq=x.begin();
    cout<<v.size()-1<<"\n";
    for(i=0;i<v.size()-1;i++)
    {
        cout<<(*qq).first<<" "<<(*qq).second<<" "<<v[i]<<" "<<v[i+1]<<"\n";
        qq++;
    }
}