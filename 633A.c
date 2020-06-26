#include<stdio.h>
int main ()
{
    int a,b,c,i,j,k;
    scanf("%d %d %d",&a,&b,&c);
    for(i=0;i<=10000;i++)
    {
        for(j=0;j<=10000;j++)
        {
          k=a*i+b*j;
          if(c==k)
          {
            printf("Yes\n");
            goto exit;

          }
        }

    }
    printf("No\n");

    exit:;

}