#include<stdio.h>
int main ()
{
    int n,b,i,ara[2500],c[2500],count=0,p=0;
    scanf("%d",&n);
    b=n*n;
    for(i=0;i<=b-1;i++)
    {
      scanf("%d %d",&ara[i],&c[i]);
      count++;
    }
    for(i=0;i<count;i++)
    {
        p++;
        if(ara[i]==c[i])
        {
            printf("%d\t",p);
        }


    }

}