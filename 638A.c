#include<stdio.h>
int main ()
{
    int a,b,i,count=0,k;
    scanf("%d %d",&a,&b);
    if(b%2!=0)
    {
        for(i=1;i<=b;i=i+2)
        {
           count++;
        }
    }
    else
    {
        a=a+1;
        k=a-b;
        for(i=1;i<=k;i=i+2)
        {
            count++;
        }
    }
    printf("%d",count);
}