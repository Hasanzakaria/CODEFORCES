#include<stdio.h>
int main ()
{
    long long int n,m,r,t,f;
    double x,y;
    scanf("%I64d %I64d",&n,&m);
    long long int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&ara[i]);
    }
    x=-1+sqrt(1+(8*m));
    y=x/2;
    r=y;
    t=(r*(r+1))/2;
    if(t==m)
    {
        printf("%I64d",ara[r-1]);
    }
    else
    {
         for(i=0;i<n;i++)
         {
            t++;
            if(t==m)
            {
              break;
            }
         }
         printf("%I64d",ara[i]);

    }




}