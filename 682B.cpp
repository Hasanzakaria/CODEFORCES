#include<stdio.h>
#include<algorithm>
int main ()
{
    int n;
    scanf("%d",&n);
    int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    std::sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            ara[i]=1;
            continue;
        }
        if(ara[i]>ara[i-1])
        {
            ara[i]=ara[i-1]+1;
        }
    }
    printf("%d",ara[n-1]+1);

}