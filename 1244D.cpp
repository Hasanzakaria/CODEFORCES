#include<bits/stdc++.h>
using namespace std;
long long int cost[100001][4],degree[100001];
vector<long long int>edge[100001];
map<long long int,long long int>mp,cp;
bool vis[100001];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,x,j,y,flag=0,start,sum,k,u,top,bottom,ans=1e17,e;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        cost[i][1]=x;
    }
    for(i=1;i<=n;i++)
    {
        cin>>x;
        cost[i][2]=x;
    }
    for(i=1;i<=n;i++)
    {
        cin>>x;
        cost[i][3]=x;
    }
    for(i=1;i<n;i++)
    {
       cin>>x>>y;
       degree[x]++;
       degree[y]++;
       edge[x].push_back(y);
       edge[y].push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        if(degree[i]>2)
        {
           flag=1;
        }
        if(degree[i]==1)
        {
           start=i;
        }
    }
    if(flag==1)
    {
        cout<<-1<<"\n";
    }
    else
    {
       for(i=1;i<=3;i++)
       {
           for(j=1;j<=3;j++)
           {
               sum=0;
               if(i==j)
               {
                   continue;
               }
               sum+=cost[start][i];
               mp[start]=i;
               vis[start]=1;
               sum+=cost[edge[start][0]][j];
               u=edge[start][0];
               vis[u]=1;
               mp[u]=j;
               top=i;
               bottom=j;
               while(degree[u]!=1)
               {
                  for(k=0;k<2;k++)
                  {
                      if(vis[edge[u][k]]==0)
                      {
                          u=edge[u][k];
                          break;
                      }
                  }
                  vis[u]=1;
                  sum+=cost[u][6-top-bottom];
                  mp[u]=6-top-bottom;
                  e=6-top-bottom;
                  top=bottom;
                  bottom=e;
               }
               ans=min(ans,sum);
               if(ans==sum)
               {
                   cp=mp;
               }
               memset(vis,0,sizeof(vis));
               mp.clear();
           }
       }
       cout<<ans<<"\n";
       for(i=1;i<=n;i++)
       {
           cout<<cp[i]<<" ";
       }
    }
}