#include<stdio.h>
int main ()
{
    int n,i,ara[2000],j,count;
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
       printf("%d ",count+1);
    }

}