#include<bits/stdc++.h>
using namespace std;
vector<int>edge[5001];
stack<int>s;
bool vis[5001];
void dfs(int r,int flag)
{
    vector<int>::iterator l;
    if(vis[r])
    {
        return;
    }
    vis[r]=1;
    for(l=edge[r].begin();l!=edge[r].end();l++)
    {
        dfs(*l,flag);
    }
    if(flag==1)
    {
        s.push(r);
    }

}
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,k,i,a,b,f,cou=0;
    cin>>n>>m>>k;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        edge[a].push_back(b);
    }
    for(i=1;i<=n;i++)
    {
      if(!vis[i])
      {
          dfs(i,1);
      }
    }
    memset(vis,0,sizeof(vis));
    dfs(k,0);
    while(!s.empty())
    {
       f=s.top();
       s.pop();
       if(!vis[f])
       {
           dfs(f,0);
           cou++;
       }
    }
    cout<<cou<<endl;
}