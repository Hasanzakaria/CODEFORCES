#include<stdio.h>
int main ()
{
    int n;
    long long int r,f=0;
    scanf("%d",&n);
    int ara[n],i,tak[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        tak[ara[i]-1]=i+1;

    }
    for(i=0;i<n-1;i++)
    {
       r=tak[i+1]-tak[i];
       if(r<0)
       {
          r=-r;
       }
       f=f+r;
    }
    printf("%I64d",f);
}