#include<stdio.h>
int main ()
{
    long long int n,k,b=0,a=0;
    scanf("%I64d",&n);
    long long int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
       k=ara[i]-b;
       if(k<0)
       {
          k=-k;
       }
       a=a+k;
       b=ara[i];

    }
    printf("%I64d",a);
}