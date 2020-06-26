#include<stdio.h>
int main ()
{
    int n,a,b,c,l,i,k,r,j,t,flag=0;
    scanf("%d",&n);
    a=1234567;
    b=123456;
    c=1234;
    l=n/a;
    for(i=l;i>=0;i--)
    {
       k=n-(i*a);
       r=k/b;
       for(j=r;j>=0;j--)
       {
          t=k-(j*b);
          if(t%c==0)
          {
              flag=1;
              goto again;
          }
       }



    }
    again:;
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }



}