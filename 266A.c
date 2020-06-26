#include<stdio.h>
int main ()
{
    int n,i,count=0,p=0;
    char ara[100];
    scanf("%d\n",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%c",&ara[i]);
        count++;
    }
    for(i=0;i<=count-2;i++)
    {
        if(ara[i]==ara[i+1])
        {
           p++;
        }
    }
    printf("%d",p);



}