#include<iostream>
#include<vector>
using namespace std;
vector<int>edge[10001];
bool vis[10001];
void dfs(int x)
{
    int k,i;
    if(vis[x])
    {
        return ;
    }
    vis[x]=1;
    k=edge[x].size();
    for(i=0;i<k;i++)
    {
        dfs(edge[x][i]);
    }

}
int main ()
{
    int a,i,t,cou=0;
    cin>>a;
    for(i=1;i<=a;i++)
    {
        cin>>t;
        edge[i].push_back(t);
        edge[t].push_back(i);
    }
    for(i=1;i<=a;i++)
    {
        if(!vis[i])
        {
            dfs(i);
            cou++;
        }
    }
    cout<<cou<<endl;

}