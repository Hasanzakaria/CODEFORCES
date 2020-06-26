#include<stdio.h>
#include<string.h>
int main ()
{
    int n,i,k;
    scanf("%d ",&n);
    char jak[n][150];
    for(i=0;i<n;i++)
    {
        scanf("%s",&jak[i]);
    }
    for(i=0;i<n;i++)
    {
      k=strlen(jak[i]);
      if(k>10)
      {
          printf("%c%d%c\n",jak[i][0],k-2,jak[i][k-1]);
      }
      else
      {
          printf("%s\n",jak[i]);
      }
    }
}