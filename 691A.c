#include<stdio.h>
int main ()
{
    int a,count=0;
    scanf("%d",&a);
    int ara[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]==0)
        {
          count++;
        }
    }
    if(a==1&&count==0)
    {
        printf("YES");
    }
    else if(a>1&&count==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}