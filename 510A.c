#include<stdio.h>
int main ()
{
    int a,b,i,k,j;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
    {
      if(i%2!=0)
      {
          for(j=1;j<=b;j++)
          {
              printf("#");
          }
          printf("\n");
      }
      else
      {
         k=i/2;
         if(k%2!=0)
         {
             for(j=1;j<b;j++)
             {
                 printf(".");
             }
             printf("#\n");
         }
         else
         {
             printf("#");
             for(j=1;j<b;j++)
             {
                 printf(".");
             }
             printf("\n");
         }
      }
    }
}