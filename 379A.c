#include<stdio.h>
int main ()
{
    int a,b,c,sum,k,m;
    scanf("%d %d",&a,&b);
    sum=a;
    for(c=a;c/b!=0;c=(c/b)+m)
    {
        m=c%b;
        k=(c/b);
        sum=k+sum;


    }
    printf("%d",sum);
}