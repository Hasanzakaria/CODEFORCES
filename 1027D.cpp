#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[200001];
bool vis[200001];
stack<long long int>s;
map<long long int,long long int>cp;
void dfs(long long int r,long long int flag)
{
    vector<long long int>::iterator l;
    if(vis[r])
    {
        return ;
    }
    vis[r]=1;
    for(l=v[r].begin();l!=v[r].end();l++)
    {
        dfs(*l,flag);
    }
    if(flag==1)
    {
        s.push(r);
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,sum=0;
    cin>>n;
    pair<long long int,long long int>ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i].first;
        ara[i].second=i+1;
        cp[i+1]=ara[i].first;
    }
    sort(ara,ara+n);
    for(i=1;i<=n;i++)
    {
        cin>>a;
        v[a].push_back(i);
    }
    for(i=0;i<n;i++)
    {
        a=ara[i].second;
        if(vis[a]==0)
        {
            dfs(a,1);
        }
    }
    memset(vis,0,sizeof(vis));
    while(!s.empty())
    {
        a=s.top();
        s.pop();
        if(vis[a]==0)
        {
            dfs(a,0);
            sum+=cp[a];
        }
    }
    cout<<sum<<"\n";

}