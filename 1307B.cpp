#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,j,ans,maxx,p,x=2;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        maxx=-1;
        cin>>a>>b;
        ans=-1;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            if(b==ara[j])
            {
               ans=1;
            }
            maxx=max(maxx,ara[j]);
        }
        if(ans==1)
        {
            cout<<ans<<"\n";
        }
        else
        {
            p=b/maxx;
            if(b%maxx!=0)
            {
                p++;
            }
            cout<<max(x,p)<<"\n";
        }
    }



}