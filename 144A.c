#include<stdio.h>
int main ()
{
    int a,i,b,max=0,min=100,d,e,k,l,m;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        if(b>max)
        {
            max=b;
            d=i;

        }
        if(b<=min)
        {
            min=b;
            e=i;

        }

    }
    l=d-1;
    m=a-e;
    k=l+m;
    if(d>e)
    {
        printf("%d",k-1);
    }
    else
    {
        printf("%d",k);
    }


}