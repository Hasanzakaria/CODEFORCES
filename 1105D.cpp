#include<bits/stdc++.h>
using namespace std;
long long int n,m,p;
long long int ara[10];
pair<long long int,long long int>pq[10];
char jak[10000][10000];
bool vis[10000][10000];
long long int cou[10];
struct  node
{
    long long int a,b,c;
};
void bfs()
{
    queue<node>q;
    long long int i,x,y,t,fx,fy,w,j;
    for(i=1;i<=p;i++)
    {
        node temp;
        temp.a=pq[i].first;
        temp.b=pq[i].second;
        temp.c=i;
        vis[temp.a][temp.b]=1;
        q.push(temp);
        cou[i]++;
    }
    while(!q.empty())
    {
        node alex;
        alex=q.front();
        q.pop();
        x=alex.a;
        y=alex.b;
        t=alex.c;
        w=ara[t]*1;
        for(i=-w;i<=w;i++)
        {
            fx=x;
            fy=y+i;
            if(vis[fx][fy]==0&&(fx>=0&&fx<n)&&(fy>=0&&fy<m)&&jak[fx][fy]!='#')
            {
                vis[fx][fy]=1;
                node temp;
                temp.a=fx;
                temp.b=fy;
                temp.c=t;
                cou[t]++;
                q.push(temp);
            }
            fx=x+i;
            fy=y;
            if(vis[fx][fy]==0&&(fx>=0&&fx<n)&&(fy>=0&&fy<m)&&jak[fx][fy]!='#')
            {
                vis[fx][fy]=1;
                node temp;
                temp.a=fx;
                temp.b=fy;
                temp.c=t;
                cou[t]++;
                q.push(temp);
            }
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i,j,y;
    cin>>n>>m>>p;
    for(i=1;i<=p;i++)
    {
      cin>>ara[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>jak[i][j];
            if(jak[i][j]>='1'&&jak[i][j]<='9')
            {
               y=jak[i][j]-48;
               pq[y].first=i;
               pq[y].second=j;
            }
        }
    }
    bfs();
    for(i=1;i<=p;i++)
    {
        cout<<cou[i]<<" ";
    }
}