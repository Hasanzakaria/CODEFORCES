#include<iostream>
using namespace std;
int main ()
{
    long long int a,b,c,d,e,k,r,f=0;
    cin>>a>>b>>c>>d>>e;
    k=max(c,a);
    r=min(d,b);
    f=r-k+1;
    if(e>=k&&e<=r)
    {
        f--;
    }
    if(f<0)
    {
        f=0;
    }
    cout<<f;
}