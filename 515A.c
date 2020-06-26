#include<stdio.h>
int main ()
{
    int a,b,c,k,l;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=0&&b>=0)
    {
      k=a+b;
      l=c-k;
      if(l%2==0&&l>=0)
      {
          printf("Yes");
      }
      else
      {
          printf("No");
      }

    }
    else if(a<=0&&b>=0)
    {
        a=-a;
        k=a+b;
        l=c-k;
        if(l%2==0&&l>=0)
        {
          printf("Yes");
        }
        else
        {
          printf("No");
        }
    }
    else if(a<=0&&b<=0)
    {
        a=-a;
        b=-b;
        k=a+b;
        l=c-k;
        if(l%2==0&&l>=0)
        {
          printf("Yes");
        }
        else
        {
          printf("No");
        }
    }
    else if(a>=0&&b<=0)
    {
        b=-b;
        k=a+b;
        l=c-k;
        if(l%2==0&&l>=0)
        {
          printf("Yes");
        }
        else
        {
          printf("No");
        }

    }

}