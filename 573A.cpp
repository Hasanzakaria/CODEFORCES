#include<iostream>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,i,flag=0;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n;i++)
    {
        while(ara[i]%2==0)
        {
            ara[i]/=2;
        }
        while(ara[i]%3==0)
        {
            ara[i]/=3;
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(ara[i]!=ara[i+1])
        {
           flag=1;
           break;
        }
    }
    if(flag==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}