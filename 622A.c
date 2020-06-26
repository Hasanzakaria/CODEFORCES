#include<stdio.h>
int main ()
{
    long long int a,b;
    double c;
    long long int k,l;
    scanf("%I64d",&a);
    b=(8*a)+1;
    c=sqrt(b)-1;
    c=c/2;
    k=c;
    l=k+1;
    c=c-k;
    l=l*c;
    if(l==0)
    {
        printf("%I64d",k);
    }
    else
    {
        printf("%I64d",l);
    }



}