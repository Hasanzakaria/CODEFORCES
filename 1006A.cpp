#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]%2==0)
        {
            cout<<ara[i]-1<<" ";
        }
        else
        {
            cout<<ara[i]<<" ";
        }
    }
}