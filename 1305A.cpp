#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,n,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        long long int ara[n],ara1[n];
        for(j=0;j<n;j++)
        {
            cin>>ara[j];
        }
        for(j=0;j<n;j++)
        {
            cin>>ara1[j];
        }
        sort(ara,ara+n);
        sort(ara1,ara1+n);
        for(j=0;j<n;j++)
        {
            cout<<ara[j]<<" ";
        }
        cout<<"\n";
        for(j=0;j<n;j++)
        {
            cout<<ara1[j]<<" ";
        }
        cout<<"\n";
    }
}