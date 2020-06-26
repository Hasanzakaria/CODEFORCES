#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[10000];
bool vis[10000];
stack<long long int>s;
bool st[10000];
map<long long int,long long int>mp[10000];
void  dfs(long long int node,long long int flag)
{
    long long int i;
    if(vis[node])
    {
        return ;
    }
    vis[node]=1;
    st[node]=1;
    for(i=0;i<v[node].size();i++)
    {
        if(st[v[node][i]]==1&&flag==0)
        {
            mp[node][v[node][i]]=2;
        }
        else if(st[v[node][i]]==0&&flag==0)
        {
           mp[node][v[node][i]]=1;
        }
        dfs(v[node][i],flag);
    }
    st[node]=0;
    if(flag==1)
    {
        s.push(node);
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,u,ans=1;
    cin>>n>>m;
    pair<long long int,long long int>pq[m];
    for(i=0;i<m;i++)
    {
        cin>>pq[i].first>>pq[i].second;
        v[pq[i].first].push_back(pq[i].second);
    }
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i,1);
        }
    }
    memset(vis,0,sizeof(vis));
    while(!s.empty())
    {
       u=s.top();
       s.pop();
       if(vis[u]==0)
       {
           dfs(u,0);
       }
    }
    for(i=1;i<=m;i++)
    {
        if(mp[pq[i-1].first][pq[i-1].second]==2)
        {
          ans=2;
        }
    }
    cout<<ans<<"\n";
    for(i=0;i<m;i++)
    {
        cout<<mp[pq[i].first][pq[i].second]<<" ";
    }

}