#include<stdio.h>
int main ()
{
    int a,i,c,k,sum=0;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        for(k=a;k/i!=0||k%i!=0;k=k/i)
        {
            c=k%i;
            sum=c+sum;

        }

    }
    printf("%d/%d",sum,a-2);
}