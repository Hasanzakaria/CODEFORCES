#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a,b=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        b+=a;
    }
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    if(b>ara[n-1]+ara[n-2])
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

}