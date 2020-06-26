#include<stdio.h>
int main ()
{
    int a,b,c,l;
    long long int d,k;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        l=b;
    }
    else
    {
        l=a;
    }
    k=a+b;
    if(k<c)
    {
        d=l+k;
    }
    else
    {
        d=l+c;
    }
    if(l==b&&(c+b)<a)
    {
        d=d+c+b;
    }
    else if(l==b&&(c+b)>a)
    {
        d=d+a;
    }
    else if(l==a&&(c+a)<b)
    {
        d=d+c+a;
    }
    else if(l==a&&(c+a)>b)
    {
        d=d+b;
    }
    printf("%I64d",d);


}