#include<stdio.h>
int main ()
{
    int a,b,c,d,e,k,l,n;
    char jak;
    scanf("%d %c %d %d",&a,&jak,&b,&c);
    d=c/60;
    e=c%60;
    k=b+e;
    if(k>=60)
    {
        k=k-60;
        a=a+1;
    }
    l=d+a;
    if(l>=24)
    {
        l=l%24;
    }
    if(l<10)
    {
        printf("0%d:",l);
    }
    else
    {
        printf("%d:",l);
    }
    if(k<10)
    {
        printf("0%d",k);
    }
    else
    {
        printf("%d",k);
    }
}