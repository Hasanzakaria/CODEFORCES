#include<stdio.h>
#include<algorithm>
int main ()
{
    int ara[5],i,count,sum=0,l,k,j;
    for(i=0;i<5;i++)
    {
        scanf("%d",&ara[i]);
        sum=sum+ara[i];
    }
    l=sum;
    std::sort(ara,ara+5);
    std::reverse(ara,ara+5);
    for(i=0;i<5;i++)
    {
        count=1;
        for(j=i+1;j<5;j++)
        {
            if(ara[i]==ara[j])
            {
               count++;
               if(count==3)
               {
                  break;
               }
            }
        }
        if(count>1)
        {
           k=sum-(count*ara[i]);
           if(k<l)
           {
             l=k;
           }
        }


    }
    printf("%d",l);
}