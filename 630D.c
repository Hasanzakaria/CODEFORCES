#include<stdio.h>
int main ()
{
    long long int a;
    long long int b;
    scanf("%I64d",&a);
    b=a*((a*3)+3);
    printf("%I64d",b+1);

}