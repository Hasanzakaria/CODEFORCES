#include<bits/stdc++.h>
using namespace std;
vector<long long int>v,to;
vector<long long int>::iterator l;
bool vis[501];
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,j,t,r,f;
    cin>>n;
    long long int cost[n+1][n+1];
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
       {
           cin>>cost[i][j];
       }
    }
    for(i=1;i<=n;i++)
    {
        cin>>t;
        v.push_back(t);
    }
    reverse(v.begin(),v.end());
    for(l=v.begin();l!=v.end();l++)
    {
       f=0;
       r=*l;
       vis[r]=1;
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=n;j++)
           {
               cost[i][j]=min(cost[i][j],cost[i][r]+cost[r][j]);
           }
       }
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=n;j++)
           {
              if(vis[i]==0||vis[j]==0)
              {
                  continue;
              }
              f+=cost[i][j];
           }
       }
       to.push_back(f);
    }
    reverse(to.begin(),to.end());
    for(l=to.begin();l!=to.end();l++)
    {
        cout<<*l<<" ";
    }
}