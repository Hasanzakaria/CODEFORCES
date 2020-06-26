#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[100001];
vector<long long int>::iterator t;
map<long long int,long long int>mp[100001],cp[100001];
bool vis[100001];
long long int dis[100001],parent[100001];
void bfs(long long int r)
{
    long long int p,f;
    queue<long long int>q;
    vis[r]=1;
    q.push(r);
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        for(t=v[p].begin();t!=v[p].end();t++)
        {
          f=*t;
          if(vis[f]==0)
          {
              dis[f]=dis[p]+mp[p][f];
              vis[f]=1;
              q.push(f);
              parent[f]=p;
          }
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,a,b,c,ans=-1,l,r,lit=0;
    cin>>n;
    for(i=1;i<n;i++)
    {
       cin>>a>>b>>c;
       v[a].push_back(b);
       v[b].push_back(a);
       mp[a][b]=c;
       mp[b][a]=c;
    }
    memset(parent,-1,sizeof(parent));
    bfs(1);
    for(i=1;i<=n;i++)
    {
      ans=max(ans,dis[i]);
      if(ans==dis[i])
      {
          l=i;
      }
    }
    while(parent[l]!=-1)
    {
      r=parent[l];
      cp[l][r]=1;
      cp[r][l]=1;
      lit+=mp[l][r];
      l=parent[l];
    }
    for(i=1;i<=n;i++)
    {
       for(t=v[i].begin();t!=v[i].end();t++)
       {
           r=*t;
           if(cp[i][r]==0)
           {
               cp[i][r]=1;
               cp[r][i]=1;
               lit+=(mp[i][r]*2);
           }
       }
    }
    cout<<lit<<endl;
}