#include<stdio.h>
int main ()
{
    char jak,str1[]="qwertyuiop[]asdfghjkl;'zxcvbnm,./",str2[1000],ft[1000];
    scanf("%c ",&jak);
    int x,i,j,k=0;
    if(jak=='L')
    {
       gets(str2);
       for(x=0;str2[x]!='\0';x++)
       {

       }
       for(i=0;i<x;i++)
       {
           for(j=0;j<33;j++)
           {
               if(str2[i]==str1[j])
               {
                 ft[i]=str1[j+1];
                 break;
               }
           }
       }
       ft[i]='\0';
       printf("%s",ft);

    }
    else if(jak=='R')
    {
       gets(str2);
       for(x=0;str2[x]!='\0';x++)
       {

       }
       for(i=0;i<x;i++)
       {
           for(j=0;j<33;j++)
           {
               if(str2[i]==str1[j])
               {
                 ft[i]=str1[j-1];
                 break;
               }
           }
       }
       ft[i]='\0';
       printf("%s",ft);


    }

}