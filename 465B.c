#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int ara[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n-1;i++)
    {
       if(ara[i]==1 &&ara[i+1]==0)
       {
          count=count+2;
       }
       else if(ara[i]==1 &&ara[i+1]==1)
       {
          count++;
       }
    }
    if(ara[n-1]==1)
    {
        count++;
        printf("%d",count);
    }
    else if(count==0)
    {
        printf("%d",count);
    }
    else
    {
        count--;
        printf("%d",count);
    }
}