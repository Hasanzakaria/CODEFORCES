#include<bits/stdc++.h>
using namespace std;
long long int factorial[1000001];
long long int mod=998244353;
//BIG MODE CODE...
long long int  bigmod ( long long a, long long int p,long long  int m )
{
    if ( p == 0 )return 1; // If power is 0, then a ^ 0 = 1 for any value of a, And 1 Mod m=1 for any value of m, So return 1

    if ( p % 2 ) // If power is odd, Split it : a ^ 5 =( a )* (a ^ 4) --> left and right child respectively.
    {
        return ( ( a % m ) * ( bigmod ( a, p - 1, m ) ) ) % m;
    }
    else //If power is even then split it equally and return the result...
    {
        long long int  c = bigmod ( a, p / 2, m );
        return ( (c%m) * (c%m) ) % m;
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int m,n,k,l,ans=0,f,u,ll,i;
    cin>>m>>n;
    factorial[0]=1;
    for(i=1;i<=1000000;i++)
    {
        factorial[i]=((i%mod)*(factorial[i-1]%mod))%mod;
    }
    for(i=1;i<=m;i++)
    {
        k=m/i;
        k--;
        l=n-1;
        if(k>=l)
        {
            f=((factorial[k-l]%mod)*(factorial[l]%mod))%mod;
            u=factorial[k];
            ll=((u%mod)*(bigmod(f,mod-2,mod)%mod))%mod;
            ans=((ans%mod)+(ll%mod))%mod;
        }
    }
    cout<<ans<<"\n";
}