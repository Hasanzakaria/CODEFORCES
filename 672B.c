#include<stdio.h>
int main ()
{
    int n,i,j,a=0,b,c;
    scanf("%d ",&n);
    char jak[n+1];
    gets(jak);
    for(i=0;i<n;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(jak[i]==jak[j])
            {
                a++;
                break;
            }
        }
    }
    b=n-a;
    c=26-b;
    if(a<=c)
    {
        printf("%d",a);
    }
    else
    {
        printf("-1");
    }




}