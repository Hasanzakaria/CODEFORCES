#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[200000];
bool vis[200000];
long long int dp[200000];
vector<long long int>t;
void dfs(long long int r)
{
    long long int i,flag=0;
    vis[r]=1;
    for(i=0;i<v[r].size();i++)
    {
        if(vis[v[r][i]]==0)
        {
            flag=1;
            dfs(v[r][i]);
            dp[r]+=dp[v[r][i]];
        }
    }
    if(flag==0)
    {
        dp[r]=1;
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,x;
    cin>>n;
    for(i=2;i<=n;i++)
    {
        cin>>x;
        v[i].push_back(x);
        v[x].push_back(i);
    }
    dfs(1);
    for(i=1;i<=n;i++)
    {
        t.push_back(dp[i]);
    }
    sort(t.begin(),t.end());
    for(i=0;i<t.size();i++)
    {
        cout<<t[i]<<" ";
    }
}