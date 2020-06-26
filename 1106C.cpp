#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,f=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(i=0;i<n/2;i++)
    {
       f+=((ara[i]+(ara[n-1-i]))*(ara[i]+(ara[n-1-i])));
    }
    cout<<f<<"\n";
}