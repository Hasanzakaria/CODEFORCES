#include<stdio.h>
int main ()
{
   int n,m,k,l,count,p=0;
   scanf("%d %d",&n,&m);
   int ara[n],i;
   for(i=0;i<n;i++)
   {
       count=0;
       scanf("%d",&ara[i]);
       k=ara[i];
       for(;k%10!=0||k/10!=0;k=k/10)
       {
           l=k%10;
           if(l==7||l==4)
           {
              count++;
           }
       }
       if(count<=m)
       {
          p++;
       }

   }
   printf("%d",p);

}