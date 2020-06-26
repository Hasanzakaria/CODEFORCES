#include<stdio.h>
#include<string.h>
int main ()
{
    int n,m,flag=0,j,i;
    scanf("%d %d ",&n,&m);
    char jak[n][m+1];
    for(i=0;i<n;i++)
    {
        scanf("%s",&jak[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m-1;j++)
        {
           if(jak[i][j]!=jak[i][j+1])
           {
               flag=1;
               goto again;
           }
        }
    }
    again:;
    if(flag==1)
    {
       printf("NO");
    }
    else
    {
        for(i=0;i<n-1;i++)
        {
            if(!strcmp(jak[i],jak[i+1]))
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    }

}