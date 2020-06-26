#include<stdio.h>
int main ()
{
    int n,k=0,r,b=0,flag=0;
    scanf("%d",&n);
    int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
       r=ara[i]-k;
       if(r<=15)
       {
          b=ara[i];
       }
       else
       {
           b=b+15;
           flag=1;
           break;

       }
       k=ara[i];
    }
    if(flag==0)
    {
        b=b+15;
        if(b>90)
        {
            b=90;
        }
    }
    printf("%d",b);
}