#include<stdio.h>
int main ()
{
    int n,a,b,c,min,k=0,max;
    scanf("%d",&n);
    a=n/7;
    b=a*2;
    c=n%7;
    if(c>5)
    {
      k=c-5;
    }
    min=b+k;
    if(c>2)
    {
        c=2;
    }
    max=b+c ;
    printf("%d %d",min,max);


}