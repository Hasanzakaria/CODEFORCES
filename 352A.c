#include<stdio.h>
int main ()
{
    int n,i,a=0,b=0,y;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&ara[i]);
       if(ara[i]==5)
       {
           a++;
       }
       if(ara[i]==0)
       {
           b++;
       }
    }
    if(b==0)
    {
        printf("-1");
    }
    else if(a<9&&b>0)
    {
        printf("0");
    }
    else if(a>=9&&b>0)
    {
       y=a/9;
       y=y*9;
       for(i=1;i<=y;i++)
       {
           printf("5");
       }
       for(i=1;i<=b;i++)
       {
           printf("0");
       }
    }
}