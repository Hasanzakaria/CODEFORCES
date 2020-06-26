#include<bits/stdc++.h>
using namespace std;
long long int n,x1,z1,x2,z2;
bool vis[2000][2000];
int dis[2000][2000];
int tx[]={0,0,1,-1};
int ty[]={1,-1,0,0};
void bfs(long long int t,long long int r)
{
    long long int u,v,i,x,y;
    pair<long long int,long long int>pq;
    vis[t][r]=1;
    queue<pair<int,int> >q;
    q.push(make_pair(t,r));
    while(!q.empty())
    {
        pq=q.front();
        q.pop();
        u=pq.first;
        v=pq.second;
        for(i=0;i<4;i++)
        {
           x=u+tx[i];
           y=v+ty[i];
           if((x==0&&(y>=0&&y<=n))||(x==n&&(y>=0&&y<=n))||(y==0&&(x>=0&&x<=n))||(y==n&&(x>=0&&x<=n)))
           {
               if(vis[x][y]==0)
               {
                   vis[x][y]=1;
                   dis[x][y]=dis[u][v]+1;
                   q.push(make_pair(x,y));
               }
           }
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>x1>>z1>>x2>>z2;
    bfs(x1,z1);
    cout<<dis[x2][z2]<<"\n";
}