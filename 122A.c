#include<stdio.h>
int main ()
{
    int ara[14]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int a,i,flag=0;
    scanf("%d",&a);
    for(i=0;i<14;i++)
    {
        if(a%ara[i]==0)
        {
            flag=1;
            break;

        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}