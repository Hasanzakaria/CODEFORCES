#include<stdio.h>
int main ()
{
    int a,b,i,k;
    scanf("%d",&a);
    b=a;
    for(i=a;i>1;i--)
    {
        k=i*(a-i)+1;
        b=b+k;
    }
    printf("%d",b);


}