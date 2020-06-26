#include<stdio.h>
int main ()
{
    int a,i,b,t=0,u=0,v=0,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        if(b==1)
        {
           t++;
        }
        else if(b==2)
        {
            u++;
        }
        else if(b==3)
        {
            v++;
        }
    }
    if(t>=u && t>=v)
    {
       k=a-t;
       printf("%d",k);
    }
    else if(u>=t&&u>=v)
    {
        k=a-u;
        printf("%d",k);
    }
    else if(v>=t&&v>=u)
    {
        k=a-v;
        printf("%d",k);
    }
}