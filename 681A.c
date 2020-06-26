#include<stdio.h>
int main ()
{
    int a,i,count=0;
    scanf("%d",&a);
    char jak[a][15];
    int ara[a],tak[a];
    for(i=0;i<a;i++)
    {
        scanf("%s",&jak[i]);
        scanf("%d %d",&ara[i],&tak[i]);
    }
    for(i=0;i<a;i++)
    {
        if(ara[i]>=2400)
        {
            if(tak[i]>ara[i])
            {
                count++;
            }
        }
    }
    if(count>0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}