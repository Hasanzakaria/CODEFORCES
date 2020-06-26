#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    long long int n,k,f,r,t,flag=0;
    cin>>n;
    long long int ara[n],i;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    k=n/2;
    f=ara[k];
    r=f-ara[0];
    if(r<0)
    {
        r=-r;
    }
    for(i=1;i<n;i++)
    {
       t=f-ara[i];
       if(t<0)
       {
           t=-t;
       }
       if(t==0)
       {
           continue;
       }
       if(t!=r)
       {
          flag=1;
          break;
       }
    }
    if(flag==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}