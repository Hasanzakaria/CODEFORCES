#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(i=0;i<n;i+=2)
    {
        cout<<ara[i]<<" ";
    }
    if(n%2==0)
    {
        for(i=n-1;i>=0;i-=2)
        {
            cout<<ara[i]<<" ";
        }
    }
    else
    {
        for(i=n-2;i>=0;i-=2)
        {
            cout<<ara[i]<<" ";
        }
    }
}