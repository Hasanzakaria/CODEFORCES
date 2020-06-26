#include<stdio.h>
int main ()
{
    long long int n,m,count=0;
    scanf("%I64d %I64d",&n,&m);
    long long int ara[n],i;
    char jak[n][2];
    for(i=0;i<n;i++)
    {
        scanf("%s",&jak[i]);
        scanf("%I64d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        if(jak[i][0]=='+')
        {
            m=m+ara[i];
        }
        else
        {
            if(m>=ara[i])
            {
                m=m-ara[i];
            }
            else
            {
                count++;
            }
        }
    }
    printf("%I64d %I64d",m,count);
}