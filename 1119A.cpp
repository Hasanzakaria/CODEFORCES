#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,t,k,l,f;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    t=ara[0];
    k=0;
    for(i=n-1;i>=0;i--)
    {
        if(ara[i]!=t)
        {
            k=i;
            break;
        }
    }
    f=n-1;
    l=ara[n-1];
    for(i=0;i<n;i++)
    {
        if(ara[i]!=l)
        {
            f=i;
            break;
        }
    }
    cout<<max(k-0,n-1-f)<<"\n";

}