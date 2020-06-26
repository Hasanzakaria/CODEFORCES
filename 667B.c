#include<stdio.h>
int main ()
{
    long long int n,sum=0,k=1,p;
    scanf("%I64d",&n);
    long long int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&ara[i]);
        sum=sum+ara[i];
        if(ara[i]>k)
        {
            k=ara[i];
        }
    }
    p=k-(sum-k);
    printf("%I64d",p+1);


}