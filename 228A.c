#include<stdio.h>
int main ()
{
    int a,b,c,d,count=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==b)
    {
        count++;
    }
    if(a==c)
    {
        count++;
    }
    if(a==d)
    {
        count++;
    }
    if(b!=a&&b==c)
    {
        count++;
    }
    if(b!=a&&b==d)
    {
        count++;
    }
    if(c!=a&&c!=b&&c==d)
    {
        count++;
    }
    printf("%d",count);
}