#include<stdio.h>
int main ()
{
    long long int n,k=1000000000,r,p,j,count=1;
    scanf("%I64d",&n);
    long long int ara[n],i,t,flag=0,l;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&ara[i]);
        if(ara[i]<k)
        {
            k=ara[i];
        }

    }
    for(i=0;i<n;i++)
    {
        flag=0;
        if(k==ara[i])
        {
           r=i+1;
           p=(n-r)+(k*n);
           for(j=i+1;j<n;j++)
           {
               if(k==ara[j])
               {
                  t=j;
                  flag=1;
                  p=p-(n-t);
                  break;
               }
           }
           if(flag==0)
           {
              for (l=0;l<n;l++)
              {
                 if(k==ara[l])
                 {
                     break;
                 }
                 p++;
              }
           }
           if(p>count)
           {
               count=p;
           }

        }
    }
    printf("%I64d",count);
}