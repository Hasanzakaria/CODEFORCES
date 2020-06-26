#include<stdio.h>
int main ()
{
    int n,m,k,count=0,l,j=1,f,r,x,y,t,z;
    scanf("%d %d",&n,&m);
    int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    r=n/2;
    if(m<=r)
    {
          k=m-1;
          t=k;
          f=k;
          if(ara[k]==1)
          {
             count++;
          }
          for( ; ; )
          {

            if(k>0)
            {

               if((ara[t+j]==ara[t-j])&&ara[t+j]==1)
               {

                  count=count+2;


               }
               k--;
               j++;
            }
            else
            {
              break;
            }

          }

          l=2*f;
          for(i=l+1;i<n;i++)
          {
            if(ara[i]==1)
            {
               count++;
            }
          }


    }
    else
    {
       k=n-m;
       z=k;
       l=m-1;
       if(ara[l]==1)
       {
           count++;
       }
       for( ; ; )
       {
           if(k>0)
           {
               if((ara[l+j]==ara[l+j])&&ara[l+j]==1)
               {
                   count=count+2;
               }
               j++;
               k--;
           }
           else
           {
               break;
           }
       }
       x=l-z;
       for(i=0;i<x;i++)
       {
           if(ara[i]==1)
           {
               count++;
           }
       }

    }
    printf("%d",count);



}