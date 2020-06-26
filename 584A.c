#include<stdio.h>
int main ()
{
    long long int n,m,i,a=1,k,flag=0;
    scanf("%I64d %I64d",&n,&m);
    for(i=1;i<=n;i++)
    {
       if(i==1)
       {
           continue;
       }
       a=a*10;
    }
    k=a*10;
    for(i=a;i<k;i++)
    {
        if(i%m==0)
        {
            printf("%I64d",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}