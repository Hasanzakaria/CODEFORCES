#include<stdio.h>
#include<string.h>
int main ()
{
    char jak[100010],tak[100010];
    gets(jak);
    gets(tak);
    int k,i,j=1,flag=0,count=0;
    k=strlen(jak);
    for(i=0;i<k;i++)
    {
        flag=0;
        if(jak[i]!=tak[i])
        {
           flag=1;
           for( ;j<k;j++)
           {
               if(jak[j]!=tak[j])
               {
                   if(jak[i]==tak[j])
                   {
                      jak[i]=tak[i];
                      jak[j]=tak[j];
                      j++;
                      break;
                   }
               }

           }
           if(flag==1)
           {
               count++;
           }
        }
    }
    printf("%d",count);
}