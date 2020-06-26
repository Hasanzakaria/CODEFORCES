#include<stdio.h>
int main ()
{
    int n,m,i,b,j=0,ara[10000],k=0,count=0;
    scanf("%d %d",&n,&m);
    int jak[m];
    for(i=1;i<=n;i++)
    {
      scanf("%d",&b);
      for(j=1;j<=b;j++)
      {
         scanf("%d",&ara[k]);
         k++;
      }

    }
    for(i=0;i<m;i++)
    {
        jak[i]=i+1;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<k;j++)
        {
            if(jak[i]==ara[j])
            {
                count++;
                break;
            }
        }
    }
    if(count==m)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}