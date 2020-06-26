#include<stdio.h>
int main ()
{
        int n,m,k,a=0,count=0;
        scanf("%d %d",&n,&m);
        int ara[n],i,j;
        for(i=0;i<n;i++)
        {
                scanf("%d",&ara[i]);

        }
        for(i=0;i<n;i++)
        {
                j=i;
                k=m;
                count=0;
                for( ;  ; )
                {
                       k=k-ara[j];
                       if(k>=0)
                       {
                               count++;
                               if(count==n)
                               {
                                       break;
                               }
                       }
                       else
                       {
                               break;
                       }
                       j++;
                       if(j==n)
                       {
                              break;
                       }
                }
                if(count>a)
                {
                        a=count;
                }
        }
        printf("%d",a);


}