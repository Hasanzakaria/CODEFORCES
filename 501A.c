#include<stdio.h>
int main ()
{
    int a,b,c,d,k,l,m,max,n,maz;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    k=a-((a/250)*c);
    m=(3*a)/10;
    if(k>m)
    {
      max=k;
    }
    else
    {
        max=m;
    }
    l=b-((b/250)*d);
    n=(3*b)/10;
    if(l>n)
    {
        maz=l;
    }
    else
    {
        maz=n;
    }
    if(max>maz)
    {
        printf("Misha");
    }
    else if(maz>max)
    {
        printf("Vasya");

    }
    else if(max==maz)
    {
        printf("Tie");
    }

}