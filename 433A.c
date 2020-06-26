#include<stdio.h>
int main ()
{
    int a,n=0,m=0;
    scanf("%d",&a);
    int ara[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]==100)
        {
          m++;
        }
        else
        {
            n++;
        }
    }
    if(n%2==0 && m%2==0)
    {
        printf("YES");
    }
    else if(n%2!=0 && m%2==0 && m>0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}