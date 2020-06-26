#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,f,ans,i;
    cin>>n;
    ans=n;
    f=sqrt(n);
    i=2;
    while(i<=f)
    {
        if(n%i==0)
        {
            ans=__gcd(ans,i);
            ans=__gcd(ans,n/i);
        }
        i++;
    }
    cout<<ans<<"\n";
}