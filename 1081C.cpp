#include<bits/stdc++.h>
using namespace std;
long long int dp[3000][3000];
long long int mod=998244353;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,k,i,j;
    cin>>n>>m>>k;
    dp[1][0]=m;
    for(i=2;i<=n;i++)
    {
        dp[i][0]=dp[i-1][0];
        for(j=1;j<i;j++)
        {
            dp[i][j]=(dp[i-1][j]+((dp[i-1][j-1]%mod)*((m-1)%mod))%mod)%mod;
        }
    }
    cout<<dp[n][k]<<"\n";
}