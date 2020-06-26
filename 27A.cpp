#include<stdio.h>
#include<algorithm>
int main ()
{
    int n,k=1;
    scanf("%d",&n);
    int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    std::sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
       if(ara[i]==k)
       {
          k++;
       }
       else
       {
          break;
       }
    }
    printf("%d",k);
 
}