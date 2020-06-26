#include<stdio.h>
int main()
{
    int a,b,c,k,max=0;
    scanf("%d %d %d",&a,&b,&c);
    k=(a+b)*c;
    if(k>max)
    {
        max=k;
    }
    k=a*(b+c);
    if(k>max)
    {
        max=k;
    }
    k=a*b*c;
    if(k>max)
    {
        max=k;
    }
    k=a+(b*c);
    if(k>max)
    {
        max=k;
    }
    k=a+b+c;
    if(k>max)
    {
        max=k;
    }
    printf("%d",max);

}