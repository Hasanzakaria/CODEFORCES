#include<stdio.h>
int main ()
{
    int n,m,i,j,k,r,t,flag=0,count=0;
    scanf("%d %d",&n,&m);
    char jak[n][m+1];
    for(i=0;i<n;i++)
    {
        scanf("%s",&jak[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            flag=0;
            r=jak[i][j]-48;
            for(k=0;k<n;k++)
            {
                if(i==k)
                {
                    continue;
                }
                t=jak[k][j]-48;
                if(r<t)
                {
                  flag=1;
                  break;
                }


            }
            if(flag==0)
            {
                count++;
                break;
            }
        }
    }
    printf("%d",count);
}