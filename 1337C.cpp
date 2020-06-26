#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[200001];
bool vis[200001];
long long int level[200001],sizee[200001];
void bfs(long long int r)
{
    queue<long long int>q;
    vis[r]=1;
    q.push(r);
    long long int f,i,u;
    while(!q.empty())
    {
        f=q.front();
        q.pop();
        for(i=0; i<v[f].size(); i++)
        {
            u=v[f][i];
            if(vis[u]==0)
            {
                vis[u]=1;
                level[u]=level[f]+1;
                q.push(u);
            }
        }
    }
}
long long int dfs(long long int r)
{
    if(vis[r])
    {
        return 0;
    }
    vis[r]=1;
    long long int cou=0,i;
    for(i=0;i<v[r].size();i++)
    {
        cou+=dfs(v[r][i]);
    }
    sizee[r]=cou;
    return sizee[r]+1;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector<long long int>vv;
    long long int n,m,i,x,y,sum=0,u;
    cin>>n>>m;
    for(i=1; i<n; i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bfs(1);
    memset(vis,0,sizeof(vis));
    u=dfs(1);
    for(i=1;i<=n;i++)
    {
        vv.push_back(level[i]-sizee[i]);
    }
    sort(vv.begin(),vv.end());
    reverse(vv.begin(),vv.end());
    for(i=0;i<m;i++)
    {
        sum+=vv[i];
    }
    cout<<sum<<"\n";

}