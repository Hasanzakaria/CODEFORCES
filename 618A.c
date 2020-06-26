#include<stdio.h>
int main ()
{
    int a,b[100000],c=1,d,i=0,j;
    scanf("%d",&a);
    for( ; ; )
    {
        d=a;
        a=a/2;
        if(a>0)
        {
            c++;
        }
        else
        {
            break;
        }
        if(d%2!=0)
        {
           b[i]=c-1;
           i++;
        }
    }
    if(i==0)
    {
      printf("%d",c);
    }
    else
    {
       printf("%d ",c);
       for(j=i-1;j>=0;j--)
       {
         printf("%d ",b[j]);
       }
    }


}