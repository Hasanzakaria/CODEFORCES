#include<stdio.h>
int main ()
{
    int a,i,b,c,k,count=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d %d",&b,&c);
        k=c-b;
        if(k>=2)
        {
         count++;
        }

    }
    printf("%d",count);

}