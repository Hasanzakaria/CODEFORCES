#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[100001];
long long int degree[100001];
long long int assignn[100001];
bool vis[100001];
void dfs(long long int r)
{
    if(vis[r])
    {
       return ;
    }
    vis[r]=1;
    long long int i,u;
    for(i=0;i<v[r].size();i++)
    {
        u=v[r][i];
        if(vis[u]==0)
        {
            if(assignn[r]==1)
            {
                assignn[u]=2;
            }
            else
            {
                assignn[u]=1;
            }
        }
        dfs(u);
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,x,y,j,u,cou=0,ex=0,start,minn=1;
    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
        degree[x]++;
        degree[y]++;
    }
    for(i=1;i<=n;i++)
    {
        if(degree[i]==1)
        {
            start=i;
        }
    }
    assignn[start]=1;
    dfs(start);
    for(i=1;i<=n;i++)
    {
        if(degree[i]==1&&assignn[i]==2)
        {
            minn=3;
        }
    }
    for(i=1;i<=n;i++)
    {
        cou=0;
        for(j=0;j<v[i].size();j++)
        {
            u=v[i][j];
            if(degree[u]==1)
            {
                cou++;
            }
        }
        if(cou>0)
        {
          ex+=cou-1;
        }
    }
    cout<<minn<<" "<<n-1-ex<<endl;

}