#include<stdio.h>
int main ()
{
    long long int n,m,i,k,t,count=0;
    scanf("%I64d %I64d",&n,&m);
    if(n<m)
    {
        for(i=1;i<=n;i++)
        {
           k=i+m;
           k=k/5;
           t=i/5;
           k=k-t;
           count=count+k;

        }
    }
    else
    {
        for(i=1;i<=m;i++)
        {
           k=i+n;
           k=k/5;
           t=i/5;
           k=k-t;
           count=count+k;

        }
    }
    printf("%I64d",count);


}