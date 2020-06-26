#include<stdio.h>
int main ()
{
    int n,i,x=0;
    char ara[3];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %c %c %c",&ara[0],&ara[1],&ara[2]);
        if(ara[1]=='+'||ara[0]=='+'||ara[2]=='+')
        {
            x=x+1;
        }
        else
        {
            x=x-1;
        }


    }
    printf("%d\n",x);
}