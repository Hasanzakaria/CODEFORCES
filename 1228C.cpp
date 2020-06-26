#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
long long int mod=1000000007;
long long int bigmod ( long long int a,long long  int p,long long int m )
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
    unsigned long long int n,m,t,l=2,r,ans=1,p,u,flag,x,f=0,e;
    long long int i;
    cin>>n>>m;
    t=sqrt(n);
    while(l<=t)
    {
        if(n%l==0)
        {
            while(n%l==0)
            {
                n/=l;
            }
            v.push_back(l);
        }
        l++;
    }
    if(n>1)
    {
        v.push_back(n);
    }
    for(i=0; i<v.size(); i++)
    {
        r=v[i];
        p=1;
        x=1;
        while(p<=m)
        {
            p*=r;

            if(p/r!=x)
            {
                p=x;
                f=1;
                break;
            }
            x=p;
        }
        if(f==0)
        {
            p/=r;
        }
        flag=0;
        while(p>=1)
        {
            if(flag==0)
            {
                flag=1;
                u=(m/p);
                u=bigmod(p,u,mod);
                ans=((ans%mod)*(u%mod))%mod;
                p/=r;
                continue;
            }
            e=r*p;
            u=((m/p)-(m/e));
            u=bigmod(p,u,mod);
            ans=((ans%mod)*(u%mod))%mod;
            p/=r;
        }
    }
    cout<<ans<<"\n";
}