#include<stdio.h>
int main ()
{
    int a,i,b,max=0,min=10000,count=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        if(b>max)
        {
            max=b;
            if(i!=1)
            {
                count++;
            }
        }
        if(b<min)
        {
            min=b;
            if(i!=1)
            {
                count++;
            }

        }
    }
    printf("%d",count);
}