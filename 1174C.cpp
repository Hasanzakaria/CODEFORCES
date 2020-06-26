#include<bits/stdc++.h>
using namespace std;
bool ara[200000];
int ans[200000];
long long int t=2;
void sieve(long long int r)
{
    long long int i;
    for(i=2;i<=r;i+=2)
    {
        ara[i]=1;
        ans[i]=1;
    }
    long long int j;
    for(i=3;i<=sqrt(r);i+=2)
    {
        if(ara[i]==0)
        {
           ans[i]=t;
           for(j=i*i;j<=r;j+=2*i)
           {
               ans[j]=t;
               ara[j]=1;
           }
           t++;
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i;
    cin>>n;
    sieve(n);
    for(i=2;i<=n;i++)
    {
        if(ans[i]==0)
        {
            cout<<t<<" ";
            t++;
            continue;
        }
        cout<<ans[i]<<" ";
    }
}