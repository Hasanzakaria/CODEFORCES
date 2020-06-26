#include<bits/stdc++.h>
using namespace std;
long long int bigmod ( long long int a,long long  int p,long long  int m )
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
vector<long long int>v[1000001];
map<long long int,long long int>mp;
vector<long long int>first,second;
long long int mod=998244353;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,j,k,x=1,y=1,t,u,ans=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        for(j=1;j<=a;j++)
        {
            cin>>k;
            v[i].push_back(k);
            mp[k]++;
        }
    }
    for(j=1;j<=n;j++)
    {
        for(i=0;i<v[j].size();i++)
        {
            x=1;
            y=1;
            y*=n;
            y*=v[j].size();
            x*=mp[v[j][i]];
            y*=n;
            ans=((ans%mod)+(((x%mod)*(bigmod(y,mod-2,mod)%mod))%mod))%mod;
        }
    }
    cout<<ans<<"\n";
}