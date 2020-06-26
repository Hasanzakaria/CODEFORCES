#include<stdio.h>
int main ()
{
    int a,b,c,d,k,l,m=0,n;
    scanf("%d %d %d",&a,&b,&c);
    d=a*c;
    for( ;a!=1; )
    {
        if(a%2!=0)
        {
            n=a%2;
            k=a-n;
            l=k/2;
            m=m+l*((b*2)+1);
            a=l+n;
        }
        else
        {
            l=a/2;
            m=m+l*((b*2)+1);
            a=l;
        }
    }
    printf("%d %d",m,d);
}