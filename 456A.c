#include<stdio.h>
int main ()
{
   int a[100000],b,c,d,i,j,n,max=0,min=100000,count=0,temp;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d %d",&b,&a[i]);
       count++;
       if(b>max)
       {
           max=b;
           c=a[i];

       }
       if(b<min)
       {
           min=b;
           d=a[i];
       }

   }
   for(i=0;i<count-1;i++)
   {
       for(j=0;j<count-1;j++)
       {
           if(a[j]>a[j+1])
           {
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
           }
       }
   }
   if(a[0]==c&&a[count-1]==d)
   {
       printf("Happy Alex");
   }
   else
   {
       printf("Poor Alex");
   }

}