#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,k=0,j;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]==1)
        {
           k++;
        }
    }
    cout<<k<<endl;
    for(i=0;i<n;i++)
    {
        if(ara[i]==1)
        {
            if(i-1>=0)
            {
                cout<<ara[i-1]<<" ";
            }
        }
    }
    cout<<ara[n-1]<<endl;
}