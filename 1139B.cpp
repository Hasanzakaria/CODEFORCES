#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=n-2;i>=0;i--)
    {
        if(ara[i]>=ara[i+1])
        {
            ara[i]=ara[i+1]-1;
        }
    }
    for(i=0;i<n;i++)
    {
       if(ara[i]<0)
       {
           continue;
       }
       sum+=ara[i];
    }
    cout<<sum<<"\n";
}