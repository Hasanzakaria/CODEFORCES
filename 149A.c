#include<stdio.h>
int main ()
{
    int n,i,ara[12],j,temp,y=0,count=0;
    scanf("%d",&n);
    for(i=0;i<12;i++)
    {
        scanf("%d",&ara[i]);
    }
    if(n==0)
    {
        printf("0");
    }
    else
    {
        for(i=0;i<12;i++)
        {
            for(j=0;j<12;j++)
            {
                if(ara[j]>ara[j+1])
                {
                    temp=ara[j];
                    ara[j]=ara[j+1];
                    ara[j+1]=temp;

                }
            }
        }

        for(i=11;i>=0;i--)
        {
            y=ara[i]+y;
            if(y<n)
            {
                count++;
            }
        }

        if(y<n)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n",count+1);
        }
    }



}