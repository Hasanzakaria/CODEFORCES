#include<stdio.h>
int main ()
{
    int a,i,b,k,l,count=0,p=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        if(b%2==0)
        {
          count++;
          k=i;
        }
        else
        {
            p++;
            l=i;
        }
    }
    if(count==1)
    {
        printf("%d",k);
    }
    if(p==1)
    {
        printf("%d",l);
    }
}