#include<stdio.h>
int main ()
{
    int a,b,c,k,l,m,n,count,x,y;
    scanf("%d %d %d",&a,&b,&c);
    int d,e,f,g;
    scanf("%d %d %d",&d,&e,&f);
    scanf("%d",&g);
    k=a+b+c;
    l=d+e+f;
    m=k/5;
    count=m;
    n=k%5;
    if(n>0)
    {
        count=count+1;
    }
    x=l/10;
    count=count+x;
    y=l%10;
    if(y>0)
    {
        count=count+1;
    }
    if(count<=g)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }



}