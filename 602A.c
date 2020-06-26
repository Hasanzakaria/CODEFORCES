#include<stdio.h>
int main ()
{
    long long int n,m,a,b,k,f=1,r,x,y=1,z;
    scanf("%I64d %I64d",&n,&m);
    long long int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&ara[i]);
    }
    scanf("%I64d %I64d",&a,&b);
    long long int jak[a];
    for(i=0;i<a;i++)
    {
        scanf("%I64d",&jak[i]);
    }
    for(i=n-1;i>=0;i--)
    {
       if(i==n-1)
       {
           k=ara[i]*1;
           continue;
       }
       f=m*f;
       r=f*ara[i];
       k=k+r;

    }
    for(i=a-1;i>=0;i--)
    {
        if(i==a-1)
        {
           x=jak[i]*1;
           continue;
        }
        y=b*y;
        z=y*jak[i];
        x=x+z;


    }
    if(k<x)
    {
        printf("<");
    }
    else if(k>x)
    {
        printf(">");
    }
    else
    {
        printf("=");
    }


}