#include<stdio.h>
int main ()
{
    int m,a,b,d,k,count=0;
    scanf("%d %d %d",&m,&a,&b);
    for(k=a+1;k<=m;k++)
    {
      d=m-k;
      if(d<=b)
      {
          count++;
      }
    }
    printf("%d",count);

}