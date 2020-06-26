#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[101];
vector<long long int>edge[100001];
vector<long long int>::iterator l;
queue<long long int>q;
bool vis[100001];
long long int level[101][100001];
vector<long long int>r;
void bfs(long long int k)
{
    long long int t,u;
    while(!q.empty())
    {
        t=q.front();
        q.pop();
        for(l=edge[t].begin();l!=edge[t].end();l++)
        {
           u=*l;
           if(vis[u]==0)
           {
               vis[u]=1;
               q.push(u);
               level[k][u]=level[k][t]+1;
           }
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,k,s,i,t,x,y,j,sum;
    cin>>n>>m>>k>>s;
    for(i=1;i<=n;i++)
    {
        cin>>t;
        v[t].push_back(i);
    }
    for(i=1;i<=m;i++)
    {
       cin>>x>>y;
       edge[x].push_back(y);
       edge[y].push_back(x);
    }
    for(i=1;i<=k;i++)
    {
       for(j=0;j<v[i].size();j++)
       {
           q.push(v[i][j]);
           vis[v[i][j]]=1;
       }
       bfs(i);
       memset(vis,0,sizeof(vis));
    }
    for(i=1;i<=n;i++)
    {
        sum=0;
        for(j=1;j<=k;j++)
        {
           r.push_back(level[j][i]);
        }
        sort(r.begin(),r.end());
        for(j=0;j<s;j++)
        {
            sum+=r[j];
        }
        r.clear();
        cout<<sum<<" ";
    }
}