#include<stdio.h>
int main ()
{
    int n,m,c,d,l,k,count=0;
    scanf("%d %d",&n,&m);
    for(c=0;c<=1000;c++)
    {
        for(d=0;d<=1000;d++)
        {
          l=c*c+d;
          k=c+d*d;
          if(l==n&&k==m)
          {
              count++;
          }

        }
    }
    printf("%d",count);


}