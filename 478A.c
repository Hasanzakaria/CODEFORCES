#include<stdio.h>
int main ()
{
    int a,b,c,d,e,f,g;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    f=a+b+c+d+e;
    if(f==0 || f%5!=0)
    {
        printf("-1");
    }
    else
    {
        g=f/5;
        printf("%d",g);
    }

}