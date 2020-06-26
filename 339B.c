#include<stdio.h>
int main ()
{
    int a,b,i,k,l=1,c,n;
    long long int sum=0;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++)
    {
        scanf("%d",&k);
        if(k>=l)
        {
            c=k-l;
            sum=sum+c;
            l=k;
        }
        else
        {
           n=a-l;
           c=n+k;
           l=k;
           sum=sum+c;
        }
    }
    printf("%I64d",sum);
}