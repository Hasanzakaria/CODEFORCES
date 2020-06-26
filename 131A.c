#include<stdio.h>
int main ()
{
    char jak[200];
    gets(jak);
    int x,i,count=0;
    for(x=0;jak[x]!='\0';x++)
    {

    }
    for(i=0;i<x;i++)
    {
        if(i==0&&jak[i]>=97&&jak[i]<=122)
        {
          count++;
        }
        else if(jak[i]>=65&&jak[i]<=90)
        {
            count++;
        }
    }
    if(count==x)
    {
      for(i=0;i<x;i++)
      {
          if(jak[i]>=65&&jak[i]<=90)
          {
              jak[i]=jak[i]+32;
          }
          else if(jak[i]>=97&&jak[i]<=122)
          {
              jak[i]=jak[i]-32;
          }
      }
       printf("%s",jak);
    }
    else
    {
        printf("%s",jak);
    }

}