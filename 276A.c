#include<stdio.h>
int main ()
{
    int a,b,i,c,d,max=-1000000000;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
        scanf("%d %d",&c,&d);
        if(d<=b)
        {
            if(c>max)
            {
                max=c;
            }
        }
        else
        {
            c=c-(d-b);
            if(c>max)
            {
                max=c;
            }
        }
    }
    printf("%d",max);
}