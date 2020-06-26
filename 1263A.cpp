#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,j,ans,k,r;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        ans=0;
        r=0;
        long long int v[3];
        for(j=0; j<3; j++)
        {
            cin>>v[j];
        }
        sort(v,v+3);
        ans+=v[0];
        k=v[2]-v[1];
        if(v[0]>k)
        {
            v[0]-=k;
            r=v[0]/2;
            if(v[0]%2!=0)
            {
                r++;
            }
        }
        ans+=(v[1]-r);
        cout<<ans<<"\n";
    }
}