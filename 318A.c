#include<stdio.h>
int main ()
{
    long long int a,b,k,i,l;
    scanf("%I64d %I64d",&a,&b);
    if(a%2==0)
    {
        k=a/2;
        if(b<=k)
        {
           i=(2*b)-1;
           printf("%I64d",i);
        }
        else
        {
            l=b-k;
            i=2*l;
            printf("%I64d",i);
        }
    }
    else
    {
        k=(a/2)+1;
        if(b<=k)
        {
            i=(2*b)-1;
            printf("%I64d",i);
        }
        else
        {
            l=b-k;
            i=2*l;
            printf("%I64d",i);
        }
    }
}