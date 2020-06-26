#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,i,l,ans=0;
    cin>>n>>k;
    long long int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    if(n>1)
    {
        l=ara[0]+ara[1];
        ans+=(l/k);
        l%=k;
        if(l>ara[1])
        {
            ans++;
            l=0;
        }
        for(i=2; i<n; i++)
        {
            l+=ara[i];
            ans+=(l/k);
            l%=k;
            if(l>ara[i])
            {
                ans++;
                l=0;
            }
        }
        if(l>0)
        {
            ans++;
        }
    }
    else
    {
        ans+=(ara[0]/k);
        if(ara[0]%k!=0)
        {
            ans++;
        }
    }
    cout<<ans<<"\n";
}