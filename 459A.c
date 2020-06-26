#include<stdio.h>
int main ()
{
    int n,m,x,y,k,r;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    if(n==x)
    {
        k=m-y;
        printf("%d %d %d %d",n+k,m,x+k,y);

    }
    else if(m==y)
    {
        k=n-x;
        printf("%d %d %d %d",n,m+k,x,y+k);
    }
    else
    {
        k=x-n;
        r=y-m;
        if(k==r)
        {
            printf("%d %d %d %d",n+k,m,n,m+k);
        }
        else
        {
            printf("-1");
        }

    }
}