#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int k,l,r,f,t,ans=100000000000,i;
    cin>>k>>l;
    r=sqrt(k);
    for(i=1; i<=r; i++)
    {
        if(k%i==0)
        {
            if(i<l)
            {
                f=k/i;
                t=f*l;
                t=t+(i-(t%l));
                ans=min(ans,t);
            }
            if(f<l)
            {
                t=i*l;
                t=t+(f-(t%l));
                ans=min(ans,t);
            }
        }
    }
    cout<<ans<<endl;
}