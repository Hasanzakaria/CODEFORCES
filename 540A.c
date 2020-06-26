#include<stdio.h>
int main ()
{
    int n,i,k,l,a,count=0;
    scanf("%d ",&n);
    char jak[n+1],tak[n+1];
    gets(jak);
    gets(tak);
    for(i=0;i<n;i++)
    {
      k=jak[i]-48;
      l=tak[i]-48;
      if(k>l)
      {
        a=k-l;
      }
      else
      {
        a=l-k;
      }
      if(a>5)
      {
        a=10-a;
        count=count+a;
      }
      else
      {
        count=count+a;
      }
    }
    printf("%d",count);

}