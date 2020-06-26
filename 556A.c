#include<stdio.h>
int main ()
{
  int a,i,b=0,c=0,d;
  scanf("%d ",&a);
  char jak[a+1];
  gets(jak);
  for(i=0;i<a;i++)
  {
      if(jak[i]=='0')
      {
         b++;
      }
      else
      {
          c++;
      }
  }
  if(b>c)
  {
     d=b-c;
     printf("%d",d);
  }
  else
  {
      d=c-b;
      printf("%d",d);
  }


}