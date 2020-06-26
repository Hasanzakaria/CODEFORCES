#include<bits/stdc++.h>
using namespace std;
vector<long long int>edge[1001];
long long int s,t;
long long int first[1001],second[1001];
map<long long int,long long int>mp[1001];
bool vis[1001];
void bfs(long long int u)
{
    long long int f,i,t;
    queue<long long int>q;
    q.push(u);
    vis[u]=1;
    while(!q.empty())
    {
       f=q.front();
       q.pop();
       for(i=0;i<edge[f].size();i++)
       {
           t=edge[f][i];
           if(vis[t]==0)
           {
               vis[t]=1;
               q.push(t);
               if(u==s)
               {
                   first[t]=first[f]+1;
               }
               else
               {
                  second[t]=second[f]+1;
               }
           }
       }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,x,y,j,cou=0;
    cin>>n>>m>>s>>t;
    for(i=1;i<=m;i++)
    {
       cin>>x>>y;
       mp[x][y]=1;
       mp[y][x]=1;
       edge[x].push_back(y);
       edge[y].push_back(x);
    }
    bfs(s);
    memset(vis,0,sizeof(vis));
    bfs(t);
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(mp[i][j]==0)
            {
                if(first[i]+second[j]+1>=first[t]&&second[i]+first[j]+1>=first[t])
                {
                    cou++;
                }
            }
        }
    }
    cout<<cou<<"\n";
}