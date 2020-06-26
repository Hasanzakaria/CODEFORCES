#include<bits/stdc++.h>
using namespace std;
long long int ara[20],mod=998244353;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long int n,k,f,x,sum=0,u;
    long long int i,j;
    string a;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        k=a.size();
        for(j=0;j<=2*k;j+=2)
        {
            u=j/2;
            ara[j]+=((a[u]-48)*n);
        }
        for(j=1;j<=2*k;j+=2)
        {
            u=j/2;
            ara[j]+=((a[u]-48)*n);
        }
    }
    f=1;
    for(i=2*k-1;i>=0;i--)
    {
        x=((ara[i]%mod)*(f%mod))%mod;
        sum=((sum%mod)+(x%mod))%mod;
        f*=10;
    }
    cout<<sum<<"\n";

}