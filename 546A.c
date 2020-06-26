#include<stdio.h>
int main ()
{
    int a,b,c,i,l,sum=0,k;
    scanf("%d %d %d",&a,&b,&c);
    for(i=1;i<=c;i++)
    {
      l=a*i;
      sum=l+sum;

    }
    if(sum<=b)
    {
        printf("0");
    }
    else
    {
        k=sum-b;
        printf("%d",k);
    }


}