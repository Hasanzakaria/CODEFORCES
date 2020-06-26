#include<stdio.h>
int main ()
{
    int n,a,b,c,i,d,e;
    scanf("%d %d %d",&n,&a,&b);
    c=a*b;
    for(i=1;i<n;i++)
    {
        scanf("%d %d",&d,&e);
        if(e<b)
        {
            b=e;
        }
        c=c+(d*b);
    }
    printf("%d",c);

}