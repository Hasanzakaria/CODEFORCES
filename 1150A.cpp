#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,r,i,f;
    cin>>n>>m>>r;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    long long int jak[m];
    for(i=0;i<m;i++)
    {
        cin>>jak[i];
    }
    sort(ara,ara+n);
    sort(jak,jak+m);
    reverse(jak,jak+m);
    if(ara[0]<jak[0])
    {
        f=r/ara[0];
        r=r%ara[0];
        r+=(jak[0]*f);
    }
    cout<<r<<"\n";
}