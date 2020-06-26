#include<stdio.h>
int main ()
{
    int a,i,b,k=1000000000;
    long long int sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        sum=sum+b;
        if(b%2!=0&&b<k)
        {
          k=b;
        }

    }
    if(sum%2==0)
    {
        printf("%I64d",sum);
    }
    else
    {
        sum=sum-k;
        printf("%I64d",sum);
    }
}