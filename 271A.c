#include<stdio.h>
int main ()
{
    int n,c,k,l,m,p;
    scanf("%d",&n);
    for(c=n+1;c<=9050;c++)
    {
       k=c%10;
       l=(c/10)%10;
       m=(c/100)%10;
       p=c/1000;
       if(l!=m&&l!=p&&l!=k)
       {
           if(k!=m&&k!=p&&k!=l)
           {
               if(m!=k&&m!=l&&m!=p)
               {
                   if(p!=k&&p!=l&&p!=m)
                   {
                       printf("%d",c);
                       break;
                   }
               }
           }
       }
    }
}