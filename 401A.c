#include<stdio.h>
int main ()
{
    int a,b,i,c,sum=0,d;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&c);
        sum=sum+c;
    }
    if(sum<0)
    {
        sum=-sum;
    }
    if(sum%b==0)
    {
        d=sum/b;
        printf("%d",d);
    }
    else if(sum%b!=0)
    {
        d=sum/b;
        printf("%d",d+1);
    }

}