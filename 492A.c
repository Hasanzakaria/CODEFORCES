#include<stdio.h>
int main ()
{
    int a,i,j,sum,count=0;
    scanf("%d",&a);
    for(i=1;i<100;i++)
    {
        sum=0;
        for(j=i;j>0;j--)
        {
            sum=j+sum;
        }
        if(sum<=a)
        {
            count++;
            a=a-sum;
        }
        else
        {
            break;
        }
    }
    printf("%d",count);

}