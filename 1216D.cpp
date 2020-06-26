#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,maxx=-1,sum=0,t=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        maxx=max(maxx,ara[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=(maxx-ara[i]);
        t=__gcd(t,maxx-ara[i]);
    }
    cout<<sum/t<<" "<<t<<"\n";

}