#include<iostream>
using namespace std;
int main ()
{
    int n,m,i,a,k,r=0;
    cin>>n>>m;
    int ara[n];
    for(i=1; i<=n; i++)
    {
        cin>>ara[i-1];
    }
    for(i=0; i<n-1; i++)
    {
        if(m>ara[i])
        {
            k=m-ara[i];
            if(ara[i+1]<k)
            {
                r=r+k-ara[i+1];
                ara[i+1]=k;

            }
        }
    }
    cout<<r<<endl;
    for(i=0; i<n; i++)
    {
        cout<<ara[i]<<" ";
    }


}