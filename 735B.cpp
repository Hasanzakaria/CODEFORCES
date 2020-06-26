#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main ()
{
    int a,b,c,k,r,i,t=1;
    double f=0,l;
    cin>>a>>b>>c;
    int ara[a];
    k=min(b,c);
    r=max(b,c);
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+a);
    for(i=1;i<=k;i++)
    {
        f=f+ara[a-t];
        t++;
    }
    l=f/k;
    f=0;
    for(i=1;i<=r;i++)
    {
        f=f+ara[a-t];
        t++;
    }
    l=l+(f/r);
    printf("%.8lf",l);
}