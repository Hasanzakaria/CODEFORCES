#include<stdio.h>
int main ()
{
    int n,i,j,ara[100],p=0,sum=0,count=0,temp,t=0,k=0;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&ara[i]);
        p++;
        sum=ara[i]+sum;



    }


    for(i=0;i<=p-2;i++)
    {
        for(j=0;j<=p-2;j++)
        {
            if(ara[j]>ara[j+1])
            {
                temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }
    }
    for(k=n-1;k>=0;k--)
    {
        t=ara[k]+t;
        if(t<=(sum-t))
        {
            count++;
        }
    }
    printf("%d",count+1);



}