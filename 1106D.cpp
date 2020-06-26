#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[100001];
vector<long long int>::iterator l;
multiset<long long int>s;
multiset<long long int>::iterator u;
bool vis[100001];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,x,y,f;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
      cin>>x>>y;
      v[x].push_back(y);
      v[y].push_back(x);
    }
    vis[1]=1;
    for(l=v[1].begin();l!=v[1].end();l++)
    {
        s.insert(*l);
    }
    cout<<1<<" ";
    while(!s.empty())
    {
        u=s.begin();
        f=*u;
        s.erase(u);
        if(vis[f]==0)
        {
            vis[f]=1;
            cout<<f<<" ";
            for(l=v[f].begin();l!=v[f].end();l++)
            {
                s.insert(*l);
            }
        }
    }
    cout<<"\n";
 
}