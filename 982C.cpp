#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[300000];
long long int sizee;
long long int dfs(long long int node,long long int parent)
{
    long long int cou=1,k,i;
    for(i=0;i<v[node].size();i++)
    {
        if(v[node][i]==parent)
        {
            continue;
        }
        k=dfs(v[node][i],node);
        cou+=k;
        if(k%2==0)
        {
            sizee++;
        }
    }
    return cou;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,b,k;
    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    if(n%2==1)
    {
        cout<<-1<<"\n";
    }
    else
    {
        k=dfs(1,1);
        cout<<sizee<<"\n";
    }
}