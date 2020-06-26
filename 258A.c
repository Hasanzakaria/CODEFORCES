#include<stdio.h>
#include<string.h>
int main ()
{
    char jak[100000];
    gets(jak);
    int k,l,j,flag=0,i;
    k=strlen(jak);
    for(i=0;i<k;i++)
    {
       l=jak[i]-48;
       if(l==0)
       {
          for(j=0;j<k;j++)
          {
              if(i==j)
              {
                  continue;
              }
              printf("%c",jak[j]);
          }
          flag=1;
          break;

       }
    }
    if(flag==0)
    {
        for(i=0;i<k-1;i++)
        {
            printf("%c",jak[i]);
        }
    }
}