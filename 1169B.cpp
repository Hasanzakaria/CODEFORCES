#include<bits/stdc++.h>
using namespace std;
long long int degree[400000];
vector<long long int>v[400000];
vector<long long int>::iterator l;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,x,y,t,temp,flag=0,j;
    cin>>n>>m;
    t=m;
    pair<long long int,long long int>pq[m];
    for(i=1;i<=m;i++)
    {
        cin>>pq[i-1].first>>pq[i-1].second;
        v[pq[i-1].first].push_back(pq[i-1].second);
        v[pq[i-1].second].push_back(pq[i-1].first);
        degree[pq[i-1].first]++;
        degree[pq[i-1].second]++;
    }
    for(i=1;i<=2;i++)
    {
        if(i==1)
        {
            x=pq[0].first;
        }
        else
        {
            x=pq[0].second;
        }
        t=m-degree[x];
        temp=degree[x];
        degree[x]=0;
        for(l=v[x].begin();l!=v[x].end();l++)
        {
            degree[*l]--;
        }
        for(j=1;j<=n;j++)
        {
            if(j==x)
            {
                continue;
            }
            if(degree[j]==t)
            {
               flag=1;
            }
        }
        degree[x]=temp;
        for(l=v[x].begin();l!=v[x].end();l++)
        {
            degree[*l]++;
        }

    }
    if(flag==1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

}