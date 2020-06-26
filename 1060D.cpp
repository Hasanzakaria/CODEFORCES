#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum=0;
    cin>>n;
    long long int ara[n],tak[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i]>>tak[i];
    }
    sort(ara,ara+n);
    sort(tak,tak+n);
    for(i=0;i<n;i++)
    {
        sum+=max(ara[i],tak[i]);
    }
    cout<<sum+n<<"\n";
}