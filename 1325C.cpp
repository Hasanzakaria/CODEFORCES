#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp,cp[100001];
vector<long long int>v[100001];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,x,y,j,l,f=0;
    cin>>n;
    pair<long long int,long long int>pq[n-1];
    for(i=1;i<n;i++)
    {
        cin>>x>>y;
        pq[i-1].first=x;
        pq[i-1].second=y;
        mp[x]++;
        mp[y]++;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(i=1;i<=n;i++)
    {
        if(mp[i]>=3)
        {
            f=3;
            for(j=0;j<3;j++)
            {
                l=v[i][j];
                cp[i][l]=j+1;
                cp[l][i]=j+1;
            }
            break;
        }
    }
    for(i=0;i<n-1;i++)
    {
        x=pq[i].first;
        y=pq[i].second;
        if(cp[x][y]==0)
        {
            cout<<f<<"\n";
            f++;
        }
        else
        {
            cout<<cp[x][y]-1<<"\n";
        }
    }

}