#include<stdio.h>
int main ()
{
    int m,n,i,j,count=0,c,temp;
    scanf("%d %d",&m,&n);
    int ara[m];
    for(i=0;i<=m-1;i++)
    {
        scanf("%d",&ara[i]);
    }
    c=ara[n-1];
    for(i=0;i<=m-1;i++)
    {
        if(ara[i]>=c&&ara[i]>0)
        {
            count++;

        }
     }
     printf("%d",count);


}