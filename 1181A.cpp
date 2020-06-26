#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,c,ans,rem,rem1,t,r,x;
    cin>>a>>b>>c;
    ans=(a/c)+(b/c);
    a%=c;
    b%=c;
    t=min(a,b);
    r=max(a,b);
    if(t>=c-r)
    {
        cout<<ans+1<<" "<<c-r<<"\n";
    }
    else
    {
        if(r>=(c-t))
        {
            cout<<ans+1<<" "<<c-t<<"\n";
        }
        else
        {
             cout<<ans<<" "<<0<<"\n";
        }
    }

}