#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,n,j,u,k,f,l,ans;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        u=0;
        cin>>n;
        k=1e18;
        ans=1e18;
        long long int ara[n],ara1[n];
        for(j=0; j<n; j++)
        {
            cin>>ara[j]>>ara1[j];
        }
        for(j=0; j<n-1; j++)
        {
            if(ara[j+1]>ara1[j])
            {
                u+=ara[j+1]-ara1[j];
            }
        }
        if(ara[0]>ara1[n-1])
        {
            u+=ara[0]-ara1[n-1];
        }
        for(j=0; j<n; j++)
        {
            l=u;
            l+=ara[j];
            if(j==0)
            {
                if(ara1[n-1]<ara[0])
                {
                    l-=ara[0]-ara1[n-1];
                }
            }
            else
            {
                if(ara1[j-1]<ara[j])
                {
                    l-=ara[j]-ara1[j-1];
                }
            }
            ans=min(ans,l);
        }
        cout<<ans<<"\n";
    }
}