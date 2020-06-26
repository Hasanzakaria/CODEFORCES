#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int tt,i,k,j,sum,t,l;
    cin>>tt;
    for(i=1;i<=tt;i++)
    {
        sum=0;
        t=0;
        cin>>k;
        for(j=1;j<=k;j++)
        {
            cin>>l;
            sum+=l;
            t^=l;
        }
        cout<<2<<"\n";
        cout<<t<<" "<<sum+t<<"\n";
    }

}