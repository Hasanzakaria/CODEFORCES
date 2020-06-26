#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,f,r,ans,sum;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        f=a;
        r=1;
        while(f/3!=0)
        {
            r*=3;
            f/=3;
        }
        ans=r*3;
        sum=0;
        while(r!=0)
        {
            if(sum+r<a)
            {
                sum+=r;
            }
            else
            {
                ans=min(ans,sum+r);
            }
            r/=3;
        }
        cout<<ans<<"\n";
    }
}