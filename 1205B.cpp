#include<bits/stdc++.h>
using namespace std;
long long int check[100000][100];
vector<long long int>v;
vector<long long int>edge[100000];
vector<pair<long long int,long long int> >po;
pair<long long int,long long int>pq;
bool vis[100000];
long long int level[100000];
void bfs(long long int r)
{
    long long int u,i,x;
    queue<long long int>q;
    vis[r]=1;
    q.push(r);
    level[r]=0;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(i=0;i<edge[u].size();i++)
        {
            x=edge[u][i];
            if(u==pq.first&&x==pq.second)
            {

            }
            else if(vis[x]==0)
            {
               vis[x]=1;
               level[x]=level[u]+1;
               q.push(x);
            }
        }
    }

}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j,t,ans,flag=0,maxx=1e9;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        j=0;
        t=ara[i];
        while(t)
        {
            check[i][j]=t%2;
            t/=2;
            j++;
        }
    }
    for(i=0;i<=66;i++)
    {
        for(j=0;j<n;j++)
        {
            if(check[j][i]==1)
            {
                v.push_back(j);
            }
        }
        if(v.size()>2)
        {
            ans=3;
            flag=1;
            break;
        }
        else if(v.size()==2)
        {
            edge[v[0]].push_back(v[1]);
            edge[v[1]].push_back(v[0]);
            po.push_back(make_pair(v[0],v[1]));
        }
        v.clear();
    }
    if(flag==1)
    {
        cout<<ans<<"\n";
    }
    else
    {
       for(i=0;i<po.size();i++)
       {
           pq=po[i];
           memset(level,-1,sizeof(level));
           bfs(pq.first);
           if(level[pq.second]!=-1)
           {
               maxx=min(maxx,level[pq.second]+1);
           }
           memset(vis,0,sizeof(vis));
       }
       if(maxx==1e9)
       {
           cout<<-1<<"\n";
       }
       else
       {
           cout<<maxx<<"\n";
       }
    }

}