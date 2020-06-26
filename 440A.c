#include<stdio.h>
int main ()
{
    long long int a,i,b,c;
    long long int k,sum=0;
    scanf("%I64d",&a);
    k=(a*(a+1))/2;
    for(i=1;i<a;i++)
    {
        scanf("%I64d",&b);
        sum=sum+b;
    }
    c=k-sum;
    printf("%I64d",c);



}