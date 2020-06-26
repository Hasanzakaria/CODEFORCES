#include<stdio.h>
int main ()
{
    int a,b,c,k=0,l=0,x=0,y=0;
    scanf("%d %d %d",&a,&b,&c);
    int ara[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]==1)
        {
            k++;
        }
        else
        {
            l++;
        }
    }
    if(k>b)
    {
       x=k-b;
    }
    else
    {
       y=b-k;
    }
    c=c+y;
    if(l>c)
    {
        x=x+(l-c);
        printf("%d",x);
    }
    else
    {
       printf("%d",x);
    }



}