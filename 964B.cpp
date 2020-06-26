#include<bits/stdc++.h>
using namespace std;
long long int a,b,c,d,e,ara[1000],dp[1000][1000];
long long int knapsack(long long int i,long long int k)
{
    if(i==a)
    {
        return 0;
    }
    if(k>e)
    {
        return 0;
    }
    if(dp[i][k]!=-1)
    {
        return dp[i][k];
    }
    long long int x,y;
    x=(d*(k-ara[i]))+(b-((k-ara[i])*c))+knapsack(i+1,ara[i+1]);
    y=knapsack(i,k+1);
    dp[i][k]=max(x,y);
    return dp[i][k];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int i,t;
    cin>>a>>b>>c>>d>>e;
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
    }
    memset(dp,-1,sizeof(dp));
    sort(ara,ara+a);
    t=knapsack(0,ara[0]);
    cout<<t<<endl;
}