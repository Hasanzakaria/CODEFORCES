#include<stdio.h>
int main ()
{
    int n,m,count=0;
    scanf("%d %d",&n,&m);
    int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]>m)
        {
           count=count+2;
        }
        else
        {
            count++;
        }
    }
    printf("%d",count);


}