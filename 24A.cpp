#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[101];
vector<long long int>::iterator l,ll;
map<long long int,long long int>cp[101];
long long int sum;
bool vis[101];
void bfs(long long int t)
{
    long long int r,u;
    queue<long long int>q;
    vis[t]=1;
    q.push(t);
    while(!q.empty())
    {
        r=q.front();
        q.pop();
        for(l=v[r].begin();l!=v[r].end();l++)
        {
           u=*l;
           if(vis[u]==0||(u==1&&r!=*ll))
           {
               vis[u]=1;
               q.push(u);
               sum+=cp[r][u];
           }
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,x,y,z,minn=10000000;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>x>>y>>z;
       v[x].push_back(y);
       v[y].push_back(x);
       cp[y][x]=z;
       cp[x][y]=0;
    }
    for(ll=v[1].begin();ll!=v[1].end();ll++)
    {
        sum+=cp[1][*ll];
        vis[1]=1;
        bfs(*ll);
        minn=min(minn,sum);
        sum=0;
        memset(vis,0,sizeof(vis));
    }
    cout<<minn<<endl;
}