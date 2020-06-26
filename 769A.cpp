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
    cout<<ara[n/2]<<"\n";
}