#include<stdio.h>
int main ()
{
    int a,k,l;
    scanf("%d",&a);
    k=a/2;
    l=a-k;
    for(; ;k--,l++)
    {
        if(k%2==0||k%3==0)
        {
            if(l%2==0||l%3==0)
            {
                break;
            }
        }
    }
    printf("%d %d",k,l);
}