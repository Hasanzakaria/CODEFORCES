#include<stdio.h>
int main ()
{
    long long int n,i;
    long long int k=1,r=0;
    scanf("%I64d",&n);
    for(i=1;i<=n;i++)
    {
       k=k*2;
       r=r+k;
    }
    printf("%I64d",r);
}