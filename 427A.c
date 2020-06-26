#include<stdio.h>
int main ()
{
    int a,i,b,sum=0,count=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        if(b!=-1)
        {
            sum=sum+b;
        }
        else
        {
            if(sum==0)
            {
               count++;
            }
            else
            {
                sum=sum-1;
            }
        }
    }
    printf("%d",count);
}