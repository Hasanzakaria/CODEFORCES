#include<iostream>
using namespace std;
int main ()
{
    int n,m,cou=0;
    cin>>n>>m;
    if(n>m)
    {
      cou=n-m;
      cout<<cou;
    }
    else if(n==m)
    {
        cout<<0;
    }
    else
    {
        for( ; ; )
        {
           if(m<n)
           {
               cou=cou+n-m;
               break;
           }
           else if(m==n)
           {
               break;
           }
           if(m%2!=0)
           {
               m++;
               cou++;
           }
           else
           {
               m/=2;
               cou++;
           }
        }
        cout<<cou;
    }
}