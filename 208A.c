#include<stdio.h>
#include<string.h>
int main ()
{
    char jak[250],tak[200];
    gets(jak);
    int n,i,flag=0,k=0;
    n=strlen(jak);
    for(i=0;i<n;i++)
    {
       if(jak[i]=='W'&&jak[i+1]=='U'&&jak[i+2]=='B')
       {
          if(flag==1)
          {
            tak[k]=' ';
            k++;
            flag=0;
          }
          i=i+2;
       }
       else
       {
          tak[k]=jak[i];
          k++;
          flag=1;
       }
    }
    tak[k]='\0';
    printf("%s",tak);


}