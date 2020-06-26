#include<iostream>
using namespace std;
int main ()
{
    int n,i,k=0,l=1000000000,cou=0;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]>k)
        {
            k=ara[i];
        }
        if(ara[i]<l)
        {
            l=ara[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]!=k&&ara[i]!=l)
        {
           cou++;
        }
    }
    cout<<cou;
}