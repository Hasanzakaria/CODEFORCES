#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,c,r,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        r=c/2;
        r=min(r,b);
        ans=r*3;
        b-=r;
        r=b/2;
        r=min(r,a);
        ans+=(3*r);
        cout<<ans<<"\n";
    }
}