#include<stdio.h>
int main ()
{
    int n,a,b,sum=0,k,p=0,j=0,r;
    scanf("%d",&n);
    int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        sum=sum+ara[i];
    }
    scanf("%d %d",&a,&b);
    if(a<b)
    {
       k=b-a;
       for( ; ; )
       {
         if(k>0)
         {
           p=p+ara[a-1+j];
           j++;

         }
         else
         {
            break;
         }
         k--;
       }
    }
    else
    {
       k=a-b;
       for( ; ; )
       {
         if(k>0)
         {
           p=p+ara[b-1+j];
           j++;

         }
         else
         {
            break;
         }
         k--;
       }
    }
    r=sum-p;
    if(p<r)
    {
        printf("%d",p);
    }
    else
    {
        printf("%d",r);
    }

}