#include<stdio.h>
#include<string.h>
int main ()
{
    char jak[1000000],tak[50];
    gets(jak);
    gets(tak);
    int x,y,i,j,k,flag=0,a=0;
    x=strlen(jak);
    y=strlen(tak);
    for(i=0;i<x;i++)
    {
        flag=0;
        if(jak[i]==tak[0])
        {
            k=i+1;
            for(j=1;j<y;j++)
            {
               if(jak[k]==tak[j])
               {
                  k++;
               }
               else
               {
                  flag=1;
                  break;
               }
            }
            if(flag==0)
            {
               a++;
               i=k-1;
            }
        }


    }
    printf("%d",a);
}