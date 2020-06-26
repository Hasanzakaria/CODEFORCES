#include<bits/stdc++.h>
using namespace std;
long long int mod=1000000007;
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
    long long int a,b,ans;
    cin>>a>>b;
    ans=bigmod(2,b,mod);
    ans=((ans%mod)-(1%mod)+mod)%mod;
    ans=bigmod(ans,a,mod);
    cout<<ans<<"\n";
}