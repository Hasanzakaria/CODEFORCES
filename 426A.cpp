#include<stdio.h>
#include<algorithm>
int main ()
{
    int n,m,k,l,a=0,flag=0;
    scanf("%d %d",&n,&m);
    int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    k=n-1;
    std::sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
       m=m-ara[i];
       if(m>=0)
       {
         a++;
         if(a==k)
         {
           flag=1;
           break;
         }
       }
       else
       {
          break;
       }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}