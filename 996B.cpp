#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,l=1000000001,k=1,flag=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        l=min(l,ara[i]);
    }
    for(i=0;i<n;i++)
    {
        ara[i]-=l;
    }
    l=l%n;
    for(i=l; ; )
    {
        if(ara[i]<=0)
        {
            cout<<i+1<<endl;
            break;
        }
        i++;
        if(i==n)
        {
            i=0;
        }
        ara[i]-=k;
        k++;
    }

}