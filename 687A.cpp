#include<bits/stdc++.h>
using namespace std;
vector<int>edge[100001],l,e;
bool vis[100001];
map<int,int>mp;
int flag;
void dfs(int r,int x)
{
    vector<int>::iterator p;
    if(vis[r])
    {
        return;
    }
    vis[r]=1;
    if(x==0)
    {
      mp[r]=1;
    }
    else
    {
        mp[r]=2;
    }
    for(p=edge[r].begin();p!=edge[r].end();p++)
    {
        if(vis[*p])
        {
          if(mp[*p]==mp[r])
          {
              flag=1;
          }
        }
        dfs(*p,(x+1)%2);
    }

}
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,m,i,a,b;
    cin>>n>>m;
    vector<int>::iterator c;
    for(i=1;i<=m;i++)
    {
      cin>>a>>b;
      edge[a].push_back(b);
      edge[b].push_back(a);
    }
    for(i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i,0);
        }
    }
    if(flag==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(mp[i]==1)
            {
               l.push_back(i);
            }
            else
            {
                e.push_back(i);
            }
        }
        cout<<l.size()<<endl;;
        for(c=l.begin();c!=l.end();c++)
        {
            cout<<*c<<" ";
        }
        cout<<endl;
        cout<<e.size()<<endl;
        for(c=e.begin();c!=e.end();c++)
        {
            cout<<*c<<" ";
        }
    }

}