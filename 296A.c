#include<stdio.h>
int main ()
{
    int n,i,j,count=1,k=1,f;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
       count=1;
       for(j=i+1;j<n;j++)
       {
           if(ara[i]==ara[j])
           {
               count++;
           }
       }
       if(count>k)
       {
           k=count;
       }
    }
    f=n-k;
    if(f>=k-1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}