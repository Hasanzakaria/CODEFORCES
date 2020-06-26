#include<stdio.h>
int main ()
{
    int a,i,b,c=1,count=0,d=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        if(b>=c)
        {
            count++;
            c=b;
            if(count>d)
            {
                d=count;
            }
        }
        else
        {
           count=1;
           c=b;

        }

    }
    printf("%d",d);
}