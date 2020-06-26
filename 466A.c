#include<stdio.h>
int main ()
{
    int a,b,c,d,e,f,k,i,l,x,y;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e=a/b;
    f=a%b;
    x=d/b;
    if(x<c)
    {
         if(f==0&&e!=0)
         {
            k=e*d;
            printf("%d",k);
         }
         else if (e==0)
         {
           i=a*c;
           if(d<i)
           {
             printf("%d",d);
           }
           else
           {
            printf("%d",i);
           }
         }
         else
         {
           k=(e*d)+(f*c);
           l=(e*d)+d;
           if(k<l)
           {
             printf("%d",k);
           }
            else
           {
             printf("%d",l);
           }


         }
    }
    else
    {
       k=a*c;
       printf("%d",k);
    }

}