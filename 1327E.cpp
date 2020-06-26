#include<bits/stdc++.h>
using namespace std;
long long int mod=998244353;
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
    long long int n,i,k,l,ans;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i==n)
        {
            cout<<10<<"\n";
        }
        else
        {
            k=bigmod(10,n-i,mod);
            k*=2;
            k%=mod;
            l=bigmod(10,n-i-1,mod);
            l=l*9*(n-i-1);
            l%=mod;
            ans=(k+l)%mod;
            ans*=9;
            ans%=mod;
            cout<<ans<<" ";

        }
    }
}