#include<stdio.h>
int main ()
{
    int n,m,i,j,flag=0,count=0,p=0,c=0,r;
    scanf("%d %d",&n,&m);
    char jak[n][m+1];
    for(i=0;i<n;i++)
    {
        scanf("%s",&jak[i]);
    }
    for(i=0;i<m;i++)
    {
         flag=0;
        if(jak[0][i]=='.')
        {
            for(j=1;j<n;j++)
            {
                if(jak[j][i]!='.')
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
               count=count+n;
               p++;

            }
        }
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        if(jak[i][0]=='.')
        {
            for(j=1;j<m;j++)
            {
                if(jak[i][j]!='.')
                {
                  flag=1;
                  break;
                }
            }
            if(flag==0)
            {
                count=count+m;
                c++;
            }
        }
    }
    r=p*c;
    count=count-r;
    printf("%d",count);
}