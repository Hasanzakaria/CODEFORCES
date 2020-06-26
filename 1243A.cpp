#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,ans,u;
    cin>>t;
    for(i=1;i<=t;i++)
    {
       ans=-1;
       cin>>a;
       long long int ara[a];
       for(j=0;j<a;j++)
       {
           cin>>ara[j];
       }
       sort(ara,ara+a);
       for(j=0;j<a;j++)
       {
           u=min(ara[j],a-j);
           ans=max(ans,u);
       }
       cout<<ans<<"\n";
    }

}