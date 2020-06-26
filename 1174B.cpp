#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,f=0,t=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]%2==0)
        {
            f=1;
        }
        else
        {
            t=1;
        }
    }
    if(f==1&&t==1)
    {
        sort(ara,ara+n);
    }
    for(i=0;i<n;i++)
    {
        cout<<ara[i]<<" ";
    }
}