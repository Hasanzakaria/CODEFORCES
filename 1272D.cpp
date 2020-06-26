#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,maxx=-1;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    long long int l[n+1],r[n+1];
    for(i=0;i<n;i++)
    {
        l[i]=1;
        r[i]=1;
    }
    l[n]=0;
    r[n]=0;
    for(i=n-2;i>=0;i--)
    {
        if(ara[i]<ara[i+1])
        {
            l[i]+=l[i+1];
        }
    }
    for(i=1;i<n;i++)
    {
        if(ara[i]>ara[i-1])
        {
            r[i]+=r[i-1];
        }
    }
    for(i=0;i<n;i++)
    {
        maxx=max(maxx,l[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if(ara[i-1]<ara[i+1])
        {
            maxx=max(maxx,r[i-1]+l[i+1]);
        }
    }
    maxx=max(maxx,r[n-2]);
    cout<<maxx<<"\n";

}