#include<bits/stdc++.h>
using namespace std;
long long int mod=1e9+9;
long long int bigmod ( long long int a,long long int p,long long  int m )
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
    long long int n,a,b,k,i,sum=0,f,cou,p,o,u,l;
    cin>>n>>a>>b>>k;
    string c;
    cin>>c;
    for(i=0;i<k;i++)
    {
        if(c[i]=='-')
        {
           f=-1;
        }
        else
        {
            f=1;
        }
        sum=sum+(f*bigmod(a,n-i,mod)*bigmod(b,i,mod));
        sum+=mod;
        sum%=mod;
    }
    cou=(n+1)/k;
    p=bigmod(b,k,mod);
    u=bigmod(a,k,mod);
    o=((p%mod)*bigmod(u,mod-2,mod))%mod;
    if(o==1)
    {
      sum=((sum%mod)*(cou%mod))%mod;
      cout<<sum<<"\n";
      return 0;
    }
    l=bigmod(o,cou,mod);
    sum=((sum%mod)*((l-1)%mod))%mod;
    sum=((sum%mod)*bigmod(o-1,mod-2,mod))%mod;
    sum+=mod;
    sum%=mod;
    cout<<sum<<"\n";
}