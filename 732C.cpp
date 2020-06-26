#include<iostream>
using namespace std;
int main ()
{
    long long int n,m,r,k,u,p,o,y,t=0;
    cin>>n>>m>>r;
    k=max(n,m);
    u=max(k,r);
    p=u-n;
    o=u-m;
    y=u-r;
    if(p!=0)
    {
        t=p-1;
    }
    if(o!=0)
    {
        t=t+o-1;
    }
    if(y!=0)
    {
        t=t+y-1;
    }
    cout<<t;

}