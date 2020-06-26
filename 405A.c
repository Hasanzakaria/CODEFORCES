#include<stdio.h>
int main()
{
    int n,temp;
    scanf("%d",&n);
    int ara[n],i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(ara[j]>ara[j+1])
            {
               temp=ara[j];
               ara[j]=ara[j+1];
               ara[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",ara[i]);
    }
}