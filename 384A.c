#include<stdio.h>
int main ()
{
     int a,b,l,i,c;
     scanf("%d",&a);
     b=a*a;
     if(b%2==0)
     {
         l=b/2;
         printf("%d\n",l);
     }
     else
     {
             l=(b/2)+1;
             printf("%d\n",l);
     }
     for(c=1,i=1;c<=a;i++)
     {
             if(i>a)
             {
                     c++;
                     i=0;
                     printf("\n");
             }
             else if(i<=a&&c%2!=0&&i%2!=0)
             {
                     printf("C");
             }
             else if(i<=a&&c%2==0&&i%2==0)
             {
                     printf("C");
             }
             else
             {
                     printf(".");
             }
     }

}