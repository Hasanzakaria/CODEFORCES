#include<stdio.h>
int main ()
{
    int a,b,i,k,count=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
       scanf("%d",&k);
       k=k+b;
       if(k<=5)
       {
        count++;
       }

    }
    count=count/3;
    printf("%d",count);
}