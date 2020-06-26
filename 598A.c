#include<stdio.h>
#include<math.h>
int main ()
{
   long long int k,t,m=1,n,a,i,b,j,po[100],z=0;
   scanf("%d",&a);
   for(i=1;i<=a;i++)
   {
       scanf("%d",&b);
       m=1;
       k=(b*(b+1))/2;
       t=log(b)/log(2);
       for(j=1;j<=t+1;j++)
       {
           m=m*2;

       }
       m=m-1;
       m=2*m;
       k=k-m;
       po[z]=k;
       z++;

   }
   for(i=0;i<z;i++)
   {
       printf("%I64d\n",po[i]);
   }


}