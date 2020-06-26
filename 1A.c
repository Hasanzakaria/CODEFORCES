#include<stdio.h>
int main ()
{
    long long int n,m,a,b,c,k;
    scanf("%I64d %I64d %I64d",&n,&m,&a);
    if(n%a==0)
    {
        b=n/a;
    }
    if(n%a!=0)
    {
        b=(n/a)+1;
    }
    if(m%a==0)
    {
       c=m/a;
    }
    if(m%a!=0)
    {
        c=(m/a)+1;
    }
    k=b*c;
    printf("%I64d",k);
    return 0;

}