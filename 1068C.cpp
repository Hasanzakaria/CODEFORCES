#include<bits/stdc++.h>
using namespace std;
vector<pair<long long int,long long int> >v[200];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,a,b,k,j;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        v[i].push_back(make_pair(i,i));
    }
    k=n+1;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        v[a].push_back(make_pair(a,k));
        v[b].push_back(make_pair(b,k));
        k++;
    }
    pair<long long int,long long int>pq;
    for(i=1;i<=n;i++)
    {
        cout<<v[i].size()<<"\n";
        for(j=0;j<v[i].size();j++)
        {
            pq=v[i][j];
            cout<<pq.first<<" "<<pq.second<<"\n";
        }
    }
}