#include<stdio.h>
int main ()
{
    int a,i,b,c,d,sum=0,p=0,l=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
      scanf("%d %d %d",&b,&c,&d);
      sum=b+sum;
      p=p+c;
      l=l+d;

    }
    if(sum==0&&p==0&&l==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}