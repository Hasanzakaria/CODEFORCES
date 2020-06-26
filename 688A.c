#include<stdio.h>
int main ()
{
    int n,m,i,j,k,flag=0,b=0,count=0;
    scanf("%d %d",&n,&m);
    char jak[m][n+1];
    for(i=0;i<m;i++)
    {
        scanf("%s",&jak[i]);
    }
    for(i=0;i<m;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            k=jak[i][j]-48;
            if(k==0)
            {
               flag=1;
               break;
            }
        }
        if(flag==1)
        {
           b++;
           if(b>count)
           {
               count=b;
           }
        }
        else
        {
           b=0;
        }
    }
    printf("%d",count);
}