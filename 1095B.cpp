#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,l=0,r=1000000000;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    reverse(ara,ara+n);
    cout<<min(ara[0]-ara[n-2],ara[1]-ara[n-1]);

}