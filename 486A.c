#include<stdio.h>
int main()
{
    long long int a,i,sum=0;
    scanf("%I64d",&a);
   if(a%2==0)
   {
       a=a/2;
       printf("%I64d",a);
   }
   else
   {
      i=(a-1)/2;
      a=i-a;
      printf("%I64d",a);
   }
}