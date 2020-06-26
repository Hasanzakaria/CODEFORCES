#include<stdio.h>
int main ()
{
    long long int a,b,k,r;
    scanf("%I64d %I64d",&a,&b);
    k=a/b;
    k++;
    r=k*b;
    printf("%I64d",r);


}