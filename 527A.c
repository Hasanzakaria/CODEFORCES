#include<stdio.h>
int main ()
{
    long long int a,b,c,d,temp;
    long long int sum=0;
    scanf("%I64d %I64d",&a,&b);
    for(c=a;c==a||b!=c;)
    {
        if(b==0||c==0)
        {
            break;
        }
        d=c/b;
        sum=sum+d;
        temp=b;
        b=c%b;
        c=temp;


    }
    printf("%I64d",sum);
}