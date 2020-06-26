#include<stdio.h>
int main ()
{
    long long int n,i,flag,p=0,b;
    scanf("%I64d",&n);
    for(i=1;i<=n;i++)
    {
        flag=0;
        for(b=2;b<=10;b++)
        {
            if(i%b==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
           p++;
        }
    }
    printf("%I64d\n",p);


}