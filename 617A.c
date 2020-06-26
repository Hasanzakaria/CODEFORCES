#include<stdio.h>
int main ()
{
    int n,i,b,sum=0;
    scanf("%d",&n);
    for(i=5;i>0;i--)
    {
        b=n/i;
        sum=b+sum;
        n=n%i;
    }
    printf("%d",sum);

}