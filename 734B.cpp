#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,d,k,l,r,t;
    cin>>a>>b>>c>>d;
    k=min(a,c);
    l=min(k,d);
    r=256*l;
    a=a-l;
    t=min(a,b);
    r+=(32*t);
    cout<<r;

}