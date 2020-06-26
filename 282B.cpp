#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string e;
    int n,i,a,b,k=0,l=0,t,flag,d=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        flag=0;
        cin>>a>>b;
        k+=a;
        t=k-l;
        if(t<0)
        {
            t=-t;
        }
        if(t<=500)
        {
            flag=1;
            e+="A";
            continue;
        }
        k=k-a;
        l+=b;
        t=k-l;
        if(t<0)
        {
            t=-t;
        }
        if(t<=500)
        {
          e+="G";
          flag=1;
        }
        if(flag==0)
        {
           d=1;
        }
    }
    if(d==1)
    {
        cout<<-1;
    }
    else
    {
      cout<<e;
    }

}