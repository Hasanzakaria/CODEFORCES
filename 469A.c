#include<stdio.h>
int main ()
{
        int a,k,l,j,falg=0,count=0;
        scanf("%d",&a);
        int b,ara[300],i;
        scanf("%d",&b);
        for(i=0;i<b;i++)
        {
             scanf("%d",&ara[i]);
        }
        scanf("%d",&k);
        l=b+k;
        for( ; i<l;i++)
        {
                scanf("%d",&ara[i]);
        }
        for(i=0;i<l;i++)
        {
                falg=0;
                for(j=i-1;j>=0;j--)
                {
                        if(ara[i]==ara[j])
                        {
                                falg=1;
                                break;
                        }
                }
                if(falg==0)
                {
                     count++;
                }
        }
        if(count==a)
        {
                printf("I become the guy.");
        }
        else
        {
                printf("Oh, my keyboard!");
        }



}