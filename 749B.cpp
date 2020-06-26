#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,d,e,f,k,l,j,o,p,i;
    cin>>a>>b>>c>>d>>e>>f;
    j=((2*e)-(2*a)+(2*c))/2;
    l=(2*c)-j;
    k=(2*a)-l;
    i=((2*f)-(2*b)+(2*d))/2;
    p=(2*d)-i;
    o=(2*b)-p;
    cout<<3<<endl;
    cout<<k<<" "<<o<<endl;
    cout<<l<<" "<<p<<endl;
    cout<<j<<" "<<i<<endl;
}