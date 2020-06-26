#include<stdio.h>
int main ()
{
   double a,b,c;
   int m,n;
   scanf("%lf %lf %lf",&a,&b,&c);
   double k,l;
   k=(c-a)/b;
   m=k;
   l=(c-(a+1))/b;
   n=l;
   if((k==m||l==n)&&(m>0||n>0))
   {
       printf("YES");
   }
   else if((m==0&&n==0)&&k==0)
   {
       printf("YES");
   }
   else
   {
       printf("NO");
   }

}