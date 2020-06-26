#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[200001];
vector<long long int>::iterator l;
bool vis[200001];
map<long long int,long long int>mp;
long long int flag;
void bfs(long long int r)
{
    long long int t,u;
    vis[r]=1;
    queue<long long int>q;
    q.push(r);
    while(!q.empty())
    {
        t=q.front();
        q.pop();
        for(l=v[t].begin(); l!=v[t].end(); l++)
        {
            u=*l;
            if(vis[u]==0)
            {
                vis[u]=1;
                mp[u]=mp[t]^1;
                q.push(u);
            }
            else
            {
                if(mp[u]==mp[t])
                {
                    flag=1;
                }
            }
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,x,y;
    cin>>n>>m;
    pair<long long int,long long int>pq[m];
    for(i=1; i<=m; i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
        pq[i-1].first=x;
        pq[i-1].second=y;
    }
    bfs(1);
    if(flag==0)
    {
        cout<<"YES\n";
        for(i=0; i<m; i++)
        {
            x=pq[i].first;
            y=pq[i].second;
            x=mp[x];
            y=mp[y];
            if(x==0&&y==1)
            {
                cout<<0;
            }
            else
            {
                cout<<1;
            }
        }
    }
    else
    {
        cout<<"NO\n";
    }

}