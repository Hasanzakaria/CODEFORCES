#include<bits/stdc++.h>
using namespace std;
long long int factorial[200001];
long long int mod= 998244353;
long long int bigmod ( long long int a,long long int p,long long int m )
{
    if ( p == 0 )return 1; // If power is 0 ( a ^ 0 ), return 1

    if ( p & 1 ) // If power is odd
    {
        return ( ( a % m ) * ( bigmod ( a, p - 1, m ) ) ) % m;
    }
    else
    {
        long long int tmp = bigmod ( a, p / 2, m );
        return ( tmp * tmp ) % m;
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,k,l,t,ans,q;
    factorial[0]=1;
    for(i=1;i<=200000;i++)
    {
        factorial[i]=((factorial[i-1]%mod)*(i%mod))%mod;
    }
    cin>>n>>m;
    if(n==2)
    {
        cout<<0<<"\n";
        return 0;
    }
    k=factorial[m];
    l=((factorial[n-1]%mod)*(factorial[m-n+1]%mod))%mod;
    t=((k%mod)*(bigmod(l,mod-2,mod)))%mod;
    ans=t*(n-2);
    q=bigmod(2,n-3,mod);
    ans=((ans%mod)*(q%mod))%mod;
    cout<<ans<<"\n";
}