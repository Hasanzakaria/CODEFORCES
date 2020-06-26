#include<bits/stdc++.h>
using namespace std;
long long int n;
pair<long long int,long long int>pq[4000];
long long int dip[4000][4000];
long long int dp(long long int i,long long int j)
{
    if(i==n)
    {
        return 0;
    }
    if(dip[i][j]!=-1)
    {
        return dip[i][j];
    }
    long long int k=1e16,l=1e16;
    if(j==3010)
    {
        k=pq[i].second+dp(i+1,i);
    }
    else
    {
        k=pq[i].second+dp(i+1,i);
        l=(pq[i].first-pq[j].first)+dp(i+1,j);
    }
    dip[i][j]=min(k,l);
    return dip[i][j];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int l;
    cin>>n;
    long long int i;
    for(i=0;i<n;i++)
    {
        cin>>pq[i].first>>pq[i].second;
    }
    sort(pq,pq+n);
    memset(dip,-1,sizeof(dip));
    l=dp(0,3010);
    cout<<l<<"\n";
}