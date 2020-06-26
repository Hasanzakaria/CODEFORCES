#include<stdio.h>
int main ()
{
    long long int a,b,c,d,e,k,l,n,m;
    double sum;
    scanf("%I64d %I64d %I64d %I64d %I64d",&a,&b,&c,&d,&e);
    k=d-b;
    l=e-c;
    if(k<0)
    {
        k=-k;
    }
    if(l<0)
    {
        l=-l;
    }
    sum=sqrt(k*k+l*l);
    n=sum/(2*a);
    m=2*a*n;
    if(sum>m)
    {
       printf("%I64d",n+1);
    }
    else
    {
        printf("%I64d",n);
    }



}