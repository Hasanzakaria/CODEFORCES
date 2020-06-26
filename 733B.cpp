#include<iostream>
using namespace std;
int main()
{
    int n,i,r=0,p=0,k,f,t,l,flag=0,q;
    cin>>n;
    int ara[n],tak[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i]>>tak[i];
        r+=ara[i];
        p+=tak[i];
    }
    k=r-p;
    if(k<0)
    {
        k=-k;
    }
    for(i=0;i<n;i++)
    {
       f=r-ara[i]+tak[i];
       t=p-tak[i]+ara[i];
       l=f-t;
       if(l<0)
       {
           l=-l;
       }
       if(l>k)
       {
          flag=1;
          k=l;
          q=i+1;
       }
    }
    if(flag==0)
    {
        cout<<0;
    }
    else
    {
        cout<<q;
    }

}