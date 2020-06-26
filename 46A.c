#include<stdio.h>
int main ()
{
    int a,i,k=1;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        k=i+k;
        if(k<=a)
        {
            printf("%d ",k);
        }
        else
        {
            k=k-a;
            printf("%d ",k);
        }
    }
}