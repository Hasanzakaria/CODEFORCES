#include<stdio.h>
int main ()
{
    long long int a,i,k,c=0,j=1,l;
    scanf("%I64d",&a);
    l=a;
    for(;a%10!=0||a/10!=0;a=a/10)
    {

        i=a%10;
        k=9-i;
        if(a>0&&a<10&&k==0)
        {
            c=c+i*j;
        }

        else if(k<i)
        {
            c=c+k*j;
            j=10*j;
        }
        else if(i<k)
        {
            c=c+i*j;
            j=10*j;
        }

    }

    printf("%I64d",c);




}