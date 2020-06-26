#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,a,b,ans=1e12;
    cin>>n>>a>>b;
    b*=5;
    while(n>=0)
    {
        ans=min(ans,n%a);
        n-=b;
    }
    cout<<ans<<"\n";
}