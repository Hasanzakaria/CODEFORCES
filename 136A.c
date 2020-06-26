#include<stdio.h>
int main ()
{
    int a,i,k;
    scanf("%d",&a);
    int b[a];
    for(i=1;i<=a;i++)
    {
        scanf("%d",&k);
        b[k-1]=i;
    }
    for(i=0;i<a;i++)
    {
        printf("%d ",b[i]);
    }
}