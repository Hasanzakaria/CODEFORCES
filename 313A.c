#include<stdio.h>
int main ()
{
    int a,k,l,m,n;
    scanf("%d",&a);
    if(a>=10)
    {
        printf("%d",a);
    }
    if(a<=-10)
    {
        a=-a;
        k=a%10;
        l=a/10;
        m=a/100;
        n=m*10+k;
        if(l<=n)
        {
            printf("%d",-l);
        }
        else
        {
           printf("%d",-n);
        }
    }
}