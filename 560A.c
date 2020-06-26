#include<stdio.h>
int main ()
{
    int n,flag=0;
    scanf("%d",&n);
    int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]==1)
        {
           flag=1;
        }
    }
    if(flag==0)
    {
        printf("1");
    }
    else
    {
        printf("-1");
    }
}