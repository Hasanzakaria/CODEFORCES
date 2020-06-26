#include<stdio.h>
int main ()
{
    long long int n,count=0,i,t,l,k,a=1,f;
    scanf("%I64d",&n);
    f=n;
    for( ;n%10!=0 ||n/10!=0 ;n=n/10)
    {
        count++;
    }
    for(i=1;i<=count;i++)
    {
        if(i==1)
        {
            t=9;
            k=t;
        }
        else
        {
           a=a*10;
           l=9*a*i;
           k=k+(9*a);
           t=t+l;
        }
    }
    k=k-f;
    k=k*(i-1);
    t=t-k;
    printf("%I64d",t);

}