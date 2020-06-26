#include<stdio.h>
#include<string.h>
int main ()
{
    char jak[1000000],temp,flag=0;
    gets(jak);
    int k,i,x,y,count=0,f;
    k=strlen(jak);
    for(i=0;i<k;i++)
    {
       x=jak[k-1]-48;
       y=jak[i]-48;
       if(y%2==0)
       {
          count++;
          f=i;
          if(x>y)
          {
              temp=jak[i];
              jak[i]=jak[k-1];
              jak[k-1]=temp;
              flag=1;
              break;
          }
       }

    }
    if(count==0)
    {
        printf("-1");
    }
    if(count!=0&&flag==0)
    {
        temp=jak[k-1];
        jak[k-1]=jak[f];
        jak[f]=temp;
        printf("%s",jak);
    }
    else if(count!=0&&flag==1)
    {
        printf("%s",jak);
    }





}