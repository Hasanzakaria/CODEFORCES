#include<stdio.h>
int main ()
{
    int a[5][5],c,k,d,l,m,i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
               c=i;
               k=j;
            }
        }
    }
    if(c>=2&&k>=2)
    {
       d=c-2;
       l=k-2;
       m=d+l;
       printf("%d",m);

    }
    else if(c<=2&&k<=2)
    {
        d=2-c;
        l=2-k;
        m=d+l;
        printf("%d",m);
    }
    else if(c>=2&&k<=2)
    {
        d=c-2;
        l=2-k;
        m=d+l;
        printf("%d",m);
    }
    else if(c<=2&&k>=2)
    {
        d=2-c;
        l=k-2;
        m=d+l;
        printf("%d",m);
    }

}