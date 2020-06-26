#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,k=0,f,flag=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]>k)
        {
            k=ara[i];
            f=i;
        }
    }
    for(i=f+1;i<n-1;i++)
    {
        if(ara[i+1]>ara[i])
        {
            flag=1;
        }
    }
    for(i=f-1;i>0;i--)
    {
        if(ara[i-1]>ara[i])
        {
            flag=1;
        }
    }
    if(flag)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }
}