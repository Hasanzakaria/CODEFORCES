#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,k,r,t,y,m,z;
    cin>>a>>b>>c;
    k=max(a,b);
    r=max(k,c);
    t=min(a,b);
    y=min(t,c);
    if(a!=r&&a!=y)
    {
      m=a;
    }
    else if(b!=r&&b!=y)
    {
        m=b;
    }
    else if(c!=r&&c!=y)
    {
        m=c;
    }
    z=(r-m)+(m-y);
    cout<<z;



}