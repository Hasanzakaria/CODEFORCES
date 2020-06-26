#include<bits/stdc++.h>
using namespace std;
long long int n,m,k,pp[101][2];
long long int dp(long long int sum,bool tr)
{
    if(sum>n)
    {
        return 0;
    }
    if(sum==n && tr)
    {
        return 1;
    }
    if(pp[sum][tr]!=-1)
    {
        return pp[sum][tr];
    }
    long long int i,r=0;
    for(i=1;i<=m;i++)
    {
        r+=dp(sum+i,tr||(i>=k));
        r=r%1000000007 ;
    }
    pp[sum][tr]=r;
    return pp[sum][tr];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int kt;
    memset(pp,-1,sizeof(pp));
    cin>>n>>m>>k;
    kt=dp(0,0);
    cout<<kt<<endl;
}