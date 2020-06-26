#include<stdio.h>
int main ()
{
    int a,count=0,flag=0;
    scanf("%d",&a);
    for( ; ; )
    {
        if(a<0)
        {
            break;
        }
        else if(flag==0)
        {
            a=a-1;
            flag=1;
            if(a>=0)
            {
                count++;
            }
        }
        else if(flag==1)
        {
            a=a-2;
            flag=0;
            if(a>=0)
            {
                count++;
            }

        }
    }
    printf("%d",count);
}