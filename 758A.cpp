#include<iostream>
using namespace std;
int main ()
{
    int n,i,k=-1,t=0;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]>k)
        {
            k=ara[i];
        }
    }
    for(i=0;i<n;i++)
    {
      t=t+(k-ara[i]);
    }
    cout<<t;
}