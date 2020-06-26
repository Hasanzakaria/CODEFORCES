#include<stdio.h>
int main ()
{
    int n,m,i,rowmin=50,colmin=50,rowmax=0,colmax=0,j;
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
            if(jak[i][j]=='*')
            {
                if(i<rowmin)
                {
                    rowmin=i;
                }
                if(j<colmin)
                {
                    colmin=j;
                }
                if(i>rowmax)
                {
                    rowmax=i;
                }
                if(j>colmax)
                {
                    colmax=j;
                }

            }
        }
    }
    for(i=rowmin;i<=rowmax;i++)
    {
        for(j=colmin;j<=colmax;j++)
        {
            printf("%c",jak[i][j]);
        }
        printf("\n");
    }

}