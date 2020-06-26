#include<stdio.h>
int main ()
{
    int a,b,i,k,sum=0,l,m,n;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&k);
        sum=sum+k;
    }
    l=sum+10*(a-1);
    if(l<=b)
    {
       m=b-sum;
       n=m/5;
       printf("%d",n);
    }
    else
    {
        printf("-1");
    }
}