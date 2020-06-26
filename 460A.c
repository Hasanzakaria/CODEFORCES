#include<stdio.h>
int main ()
{
   int a,b,sum,k,l,m;
   scanf("%d %d",&a,&b);
   sum=a;
   for(k=a;k/b!=0;)
   {
      l=k/b;
      sum=l+sum;
      m=k%b;
      k=l+m;

   }
   printf("%d",sum);






}