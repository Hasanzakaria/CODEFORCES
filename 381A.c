#include<stdio.h>
int main ()
{
    int n,k,flag=0,a=0,b=0;
    scanf("%d",&n);
    int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    k=n-1;
    for(i=0;i<=k;i++)
    {
        if(ara[i]>ara[k])
        {
           if(flag==0)
           {
             a=a+ara[i];
             flag=1;
           }
           else
           {
             b=b+ara[i];
             flag=0;
           }
        }
        else
        {
           if(flag==0)
           {
              a=a+ara[k];
              k--;
              i--;
              flag=1;
           }
           else
           {
               b=b+ara[k];
               k--;
               i--;
               flag=0;
           }
        }
    }
    printf("%d %d",a,b);

}