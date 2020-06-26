#include<stdio.h>
#include<algorithm>
int main ()
{
    int n,m,k;
    scanf("%d %d",&n,&m);
    int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    k=n-m;
    std::sort(ara,ara+n);
    if(k>=0)
    {
      for(i=0;i<n;i++)
      {
          if(k==0)
          {
              break;
          }
          k--;
      }
      printf("%d %d",ara[i],ara[i]);
    }
    else
    {
        printf("-1");
    }


}