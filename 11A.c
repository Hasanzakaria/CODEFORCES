#include<stdio.h>
int main ()
{
   int a,b,k,count=0;
   scanf("%d %d",&a,&b);
   int ara[a],i;
   for(i=0;i<a;i++)
   {
       scanf("%d",&ara[i]);
   }
   for(i=0;i<a-1;i++)
   {
       k=0;
       if(ara[i]>=ara[i+1])
       {
         k=(ara[i]-ara[i+1])/b;
         k++;
         ara[i+1]=ara[i+1]+(b*k);
       }
       count=count+k;

    }
    printf("%d",count);
}