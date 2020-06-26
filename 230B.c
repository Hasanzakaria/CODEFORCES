#include<stdio.h>
int main ()
{
    long long int n,a,j,l,flag=0;
    double k;
    scanf("%I64d",&n);
    long long int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        k=sqrt(ara[i]);
        a=k;
        if(k==a)
        {
           l=sqrt(a);
           for(j=2;j<=l;j++)
           {
               if(a%j==0)
               {
                  flag=1;
                  break;
               }
           }
           if(ara[i]==1)
           {
               flag=1;
           }
           if(flag==0)
           {
               printf("YES\n");
           }
           else
           {
               printf("NO\n");
           }
        }
        else
        {
            printf("NO\n");
        }
    }
}