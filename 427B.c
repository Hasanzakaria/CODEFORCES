#include<stdio.h>
int main ()
{
    int a,b,c,d=0,k,r,p,count=0,f,m;
    scanf("%d %d %d",&a,&b,&c);
    int ara[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<a;i++)
    {
        if(ara[i]>b)
        {
          k=i+1;
          r=k-d;
          r--;
          d=k;
          if(r<c)
          {
              continue;
          }
          p=r-c;
          p++;
          count+=p;


        }
    }
    f=i-d;
    if(f>=c)
    {
       m=f-c;
       m++;
       count=count+m;
    }

    printf("%d",count);

}