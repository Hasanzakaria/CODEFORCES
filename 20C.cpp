#include<bits/stdc++.h>
using namespace std;
vector<long long int>edge[100001],v;
vector<long long int>::iterator l;
map<long long int,long long int>mp[100001];
long long int dis[100001];
long long int parent[100001];
struct point
{
    long long int name,val;
    bool operator<(const point &a)const
    {
        return a.val<val;
    }
};
priority_queue<point>pq;
void dijkstra(long long int r)
{
   long long int y;
   for(l=edge[r].begin();l!=edge[r].end();l++)
   {
     y=*l;
     if(dis[r]+mp[r][y]<dis[y])
     {
         dis[y]=dis[r]+mp[r][y];
         point u;
         u.name=y;
         u.val=dis[y];
         pq.push(u);
         parent[y]=r;
     }
   }
}
int main()
{
    long long int n,m,i,a,b,c;
    cin>>n>>m;
    for(i=1; i<=m; i++)
    {
        cin>>a>>b>>c;
        if(!mp[a][b])
        {
            mp[a][b]=c;
            mp[b][a]=c;
            edge[a].push_back(b);
            edge[b].push_back(a);
        }
        else
        {
            mp[a][b]=min(mp[a][b],c);
            mp[b][a]=min(mp[b][a],c);
        }
    }
    dis[1]=0;
    for(i=2; i<=n; i++)
    {
        dis[i]=1e17;
    }
    point y;
    y.name=1;
    y.val=0;
    pq.push(y);
    while(!pq.empty())
    {
       point t;
       t=pq.top();
       pq.pop();
       if(t.name==n)
       {
           break;
       }
       dijkstra(t.name);
    }
    if(dis[n]==1e17)
    {
        cout<<-1<<endl;
    }
    else
    {
        v.push_back(n);
        while(parent[n])
        {
            v.push_back(parent[n]);
            n=parent[n];
        }
        reverse(v.begin(),v.end());
        for(l=v.begin();l!=v.end();l++)
        {
            cout<<*l<<" ";
        }
    }


}