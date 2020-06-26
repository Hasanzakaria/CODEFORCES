#include<stdio.h>
int main ()
{
    int a,flag=0,k,r,f=1000000000;
    scanf("%d ",&a);
    char jak[a+1];
    gets(jak);
    int ara[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<a-1;i++)
    {
        if(jak[i]=='R'&&jak[i+1]=='L')
        {
           flag=1;
           k=ara[i+1]-ara[i];
           r=k/2;
           if(r<f)
           {
               f=r;
           }

        }
    }
    if(flag==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",f);
    }

}