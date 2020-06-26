#include<stdio.h>
int main ()
{
    int a,i,b,c,d,e,p=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
       scanf("%d %d %d",&b,&c,&d);
       e=b+c+d;
       if(e>=2)
       {
         p++;
       }
    }
    printf("%d",p);
}