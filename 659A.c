#include<stdio.h>
int main ()
{
    int a,b,c,k,p,r;
    scanf("%d %d %d",&a,&b,&c);
    if(c>=0)
    {
      k=c%a;
      p=b+k;
      if(p<=a)
      {
         printf("%d",p);
      }
      else
      {
          p=p-a;
          printf("%d",p);
      }

    }
    else
    {
      k=b+c;
      if(k>0)
      {
          printf("%d",k);
      }
      else if(k==0)
      {
          printf("%d",a);
      }
      else
      {
          k=-k;
          r=k%a;
          p=a-r;
          printf("%d",p);
      }

    }
}