#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,k,i,p,r,ans=0,f;
    cin>>n>>m>>k;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    p=ara[n-1]*k;
    p+=ara[n-2];
    r=m/(k+1);
    f=m%(k+1);
    ans+=(r*p);
    ans+=(f*ara[n-1]);
    cout<<ans<<"\n";


}