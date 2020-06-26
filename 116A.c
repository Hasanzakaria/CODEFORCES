#include<stdio.h>
int main ()
{
    int m,i,a,b,c=0,max=0;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
       scanf("%d %d",&a,&b);
       if(a!=0&&i==1)
       {
            break;
       }
       c=c+b-a;
       if(c>max)
       {
            max=c;
       }


    }
    printf("%d",max);
}