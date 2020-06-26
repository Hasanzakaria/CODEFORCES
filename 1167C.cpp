#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000000];
vector<int>tt;
vector<int>::iterator u;
bool vis[1000000];
int cou=0;
int ans[1000000];
void dfs(int r)
{
    vector<int>::iterator l;
    if(vis[r])
    {
        return ;
    }
    vis[r]=1;
    tt.push_back(r);
    cou++;
    for(l=v[r].begin(); l!=v[r].end(); l++)
    {
        dfs(*l);
    }

}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,i,k,j,flag=0,t,r;
    cin>>n>>m;
    for(i=1; i<=m; i++)
    {
        cin>>k;
        flag=0;
        for(j=1; j<=k; j++)
        {
            cin>>r;
            if(flag==0)
            {
                t=r;
                flag=1;
            }
            else
            {
                v[t].push_back(r);
                v[r].push_back(t);
                t=r;
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
            for(u=tt.begin();u!=tt.end();u++)
            {
               ans[*u]=cou;
            }
            cou=0;
            tt.clear();
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<ans[i]<<" ";
    }


}