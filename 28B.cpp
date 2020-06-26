#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
vector<long long int>edge[200];
bool vis[200];
void dfs(long long int r)
{
    long long int i;
    if(vis[r]==1)
    {
        return ;
    }
    vis[r]=1;
    for(i=0;i<edge[r].size();i++)
    {
        dfs(edge[r][i]);
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,x,t,f,flag=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        cin>>t;
        f=i+t;
        if(f<=n)
        {
            edge[i].push_back(f);
            edge[f].push_back(i);
        }
        f=i-t;
        if(f>=1)
        {
            edge[i].push_back(f);
            edge[f].push_back(i);
        }
    }
    for(i=0;i<v.size();i++)
    {
       dfs(v[i]);
       if(vis[i+1]==0)
       {
          flag=1;
          break;
       }
       memset(vis,0,sizeof(vis));
    }
    if(flag)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }
}