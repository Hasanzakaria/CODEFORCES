#include<stdio.h>
int main ()
{
    int a,i,k=0,count=0,b;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        if(k!=b)
        {
            count++;
            k=b;
        }

    }
    printf("%d",count);
}