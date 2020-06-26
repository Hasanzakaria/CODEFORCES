#include<stdio.h>
int main ()
{
    int n,m,count=0;
    scanf("%d %d",&n,&m);
    for( ; ; )
    {
       if(n!=0&&m!=0)
       {
           count++;
       }
       else
       {
           break;
       }
       n--;
       m--;
    }
    if(count%2==0)
    {
        printf("Malvika");
    }
    else
    {
        printf("Akshat");
    }
}