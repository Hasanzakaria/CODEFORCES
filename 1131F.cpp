#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[150001];
long long int vis[150001];
void dfs(long long int r)
{
    vector<long long int>::iterator l;
    if(vis[r]==1)
    {
        return ;
    }
    vis[r]=1;
    cout<<r<<" ";
    for(l=v[r].begin();l!=v[r].end();l++)
    {
        dfs(*l);
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,b,k,minn=1500000,p;
    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(i=1;i<=n;i++)
    {
       p=v[i].size();
       minn=min(minn,p);
       if(minn==p)
       {
           k=i;
       }
    }
    dfs(k);
}