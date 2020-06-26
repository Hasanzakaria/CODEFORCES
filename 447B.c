#include<stdio.h>
#include<string.h>
int main ()
{
   char jak[1000];
   gets(jak);
   int n,ara[26],i,k,l,j,temp,x;
   long long int z=0;
   scanf("%d",&n);
   for(i=0;i<26;i++)
   {
       scanf("%d",&ara[i]);
   }
   k=strlen(jak);
   for(i=0;i<k;i++)
   {
     l=jak[i]-97;
     z=z+(ara[l]*(i+1));
   }
   x=i+1;
   for(i=0;i<25;i++)
   {
       for(j=0;j<25;j++)
       {
           if(ara[j]>ara[j+1])
           {
               temp=ara[j];
               ara[j]=ara[j+1];
               ara[j+1]=temp;

           }
       }
   }
   for( ;n>0; )
   {
       z=z+(ara[25]*x);
       x++;
       n--;
   }
   printf("%I64d",z);


}