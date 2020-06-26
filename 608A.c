#include<stdio.h>
int main()
{
    int a,b,u,i,k,p=0,r;
    scanf("%d %d",&a,&b);
    u=2*a;
    int ara[u];
    for(i=0;i<u;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=u-2;i>=0;i=i-2)
    {
       k=b-ara[i];
       p=p+k;
       b=ara[i];
       if(ara[i+1]>p)
       {
           r=ara[i+1]-p;
           p=p+r;
       }
    }
    p=p+(b-0);
    printf("%d",p);
}