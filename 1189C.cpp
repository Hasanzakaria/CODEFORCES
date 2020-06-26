#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,m,a,b,ans;
    cin>>n;
    long long int ara[n],sum[n];
    for(i=0;i<n;i++)
    {
       cin>>ara[i];
    }
    sum[0]=ara[0];
    for(i=1;i<n;i++)
    {
        sum[i]=sum[i-1]+ara[i];
    }
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        ans=sum[b-1];
        if(a!=1)
        {
            ans-=sum[a-2];
        }
        cout<<ans/10<<"\n";
    }

}