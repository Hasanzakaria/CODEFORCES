#include<stdio.h>
int main ()
{
    int n,m,k,a=0;
    scanf("%d %d",&n,&m);
    int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n-1;i++)
    {
        k=ara[i]-ara[i+1];
        if(k>a)
        {
            a=k;
        }
    }

    a=a-m;
    if(a<0)
    {
        printf("0");
    }
    else
    {
        printf("%d",a);
    }

}