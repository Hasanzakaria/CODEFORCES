#include<bits/stdc++.h>
using namespace std;
long long int n,ttime[3000],cost[3000],dip[3000][3000];
long long int dp(long long int i,long long int j)
{
    if(j>=n)
    {
        return 0;
    }
    else if(i==n)
    {
        return 1e14;
    }
    if(dip[i][j]!=-1)
    {
        return dip[i][j];
    }
    long long int k,l;
    k=cost[i]+dp(i+1,j+1+ttime[i]);
    l=dp(i+1,j);
    dip[i][j]=min(k,l);
    return dip[i][j];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ttime[i]>>cost[i];
    }
    memset(dip,-1,sizeof(dip));
    k=dp(0,0);
    cout<<k<<"\n";
}