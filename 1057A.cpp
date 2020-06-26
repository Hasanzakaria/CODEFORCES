#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[300000];
bool vis[300000];
long long int parent[300000];
vector<long long int>t;
void dfs(long long int x,long long int pre)
{
    long long int i;
    if(vis[x])
    {
        return ;
    }
    vis[x]=1;
    parent[x]=pre;
    for(i=0;i<v[x].size();i++)
    {
        dfs(v[x][i],x);
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,x,r;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        cin>>x;
        v[x].push_back(i);
        v[i].push_back(x);
    }
    dfs(1,-1);
    r=n;
    t.push_back(r);
    while(parent[r]!=-1)
    {
        r=parent[r];
        t.push_back(r);
    }
    reverse(t.begin(),t.end());
    for(i=0;i<t.size();i++)
    {
        cout<<t[i]<<" ";
    }
}