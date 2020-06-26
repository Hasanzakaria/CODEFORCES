#include<stdio.h>
int main ()
{
    int n,ara[1000],i,j,count,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
          if(ara[i]<ara[j])
          {
            count++;
          }
        }
        if(count>max)
        {
            max=count;
        }
    }
    printf("%d",max);


}