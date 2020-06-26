#include<stdio.h>
int main ()
{
    int a,b,c,i,flag=0;
    scanf("%d %d",&a,&b);
    if(a%2==0)
    {
        c=a/2;
    }
    else
    {
        c=(a/2)+1;
    }
    for(i=c;i<=a;i++)
    {
        if(i%b==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",i);
    }
}