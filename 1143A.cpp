#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,f,t;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    f=ara[n-1];
    for(i=n-2;i>=0;i--)
    {
        if(ara[i]!=f)
        {
            t=i+1;
            break;
        }
    }
    cout<<t<<"\n";
}