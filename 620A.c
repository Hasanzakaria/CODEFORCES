#include<stdio.h>
int main ()
{
    int a,b,c,d,e,f,k,l;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a>c)
    {
        e=a-c;
    }
    else
    {
        e=c-a;

    }
    if(b>d)
    {
        f=b-d;

    }
    else
    {
        f=d-b;
    }
    if(e>f)
    {
        printf("%d",e);
    }
    else
    {
        printf("%d",f);
    }


}