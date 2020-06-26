#include<stdio.h>
int main ()
{
    int ara[3][3],i,j,k,sum,p,l;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ara[i][j]);
        }
    }
    k=(ara[1][0]+ara[1][2])/2;
    ara[1][1]=k;
    sum=ara[1][0]+ara[1][1]+ara[1][2];
    p=sum-(ara[0][1]+ara[0][2]);
    ara[0][0]=p;
    l=sum-(ara[2][0]+ara[2][1]);
    ara[2][2]=l;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",ara[i][j]);
        }
        printf("\n");
    }



}