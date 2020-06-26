#include<stdio.h>
int main ()
{
    long long int n,m,k,t,x,y,z=0,i;
    scanf("%I64d %I64d",&n,&m);
    k=n-(m-1);
    t=(k*(k-1))/2;
    x=n/m;
    y=n%m;
    for(i=1;i<=y;i++)
    {
         z=z+((x+1)*x)/2;
    }
    m=m-y;
    z=z+((x*(x-1))/2)*m;
    printf("%I64d %I64d",z,t);

}