#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sumx=0,sumy=0,ans=0,x,y,sumxx=0,sumyy=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        ans+=((i-1)*x*x)-(2*x*sumx)+sumxx;
        ans+=((i-1)*y*y)-(2*y*sumy)+sumyy;
        sumx+=x;
        sumy+=y;
        sumxx+=(x*x);
        sumyy+=(y*y);
    }
    cout<<ans<<"\n";
}