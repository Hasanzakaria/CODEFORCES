#include<stdio.h>
int main ()
{
    int n,m,a,b,i;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    int ara[n],tak[m];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&tak[i]);
    }
    if(ara[a-1]<tak[m-b])
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}