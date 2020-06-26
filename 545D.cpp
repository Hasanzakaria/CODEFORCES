#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    long long int n,i,k,r=1;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    k=ara[0];
    for(i=1;i<n;i++)
    {
        if(k<=ara[i])
        {
            r++;
            k+=ara[i];
        }
    }
    cout<<r;



}