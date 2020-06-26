#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,x,y,a,b,minn,maxx,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ans=0;
        cin>>x>>y>>a>>b;
        minn=min(x,y);
        maxx=max(x,y);
        if(2*a<b)
        {
            ans+=minn*2*a;
        }
        else
        {
            ans+=minn*b;
        }
        ans+=(maxx-minn)*a;
        cout<<ans<<"\n";
    }
}