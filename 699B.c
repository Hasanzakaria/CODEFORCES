#include<stdio.h>
int main ()
{
    int a,b,i,j,m,n,flag=0,c,v,t=0,k=0;
    scanf("%d %d",&a,&b);
    char jak[a][b+1],tak[a][b+1],faq[a][b+1];
    for(i=0;i<a;i++)
    {
        scanf("%s",&jak[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {

            if(jak[i][j]=='*')
            {
                rak:;
                flag=0;
                for(m=0;m<a;m++)
                {
                    for(n=0;n<b;n++)
                    {
                        if(m==i||n==j)
                        {
                            continue;
                        }
                        if(jak[m][n]!='.')
                        {
                           flag=1;
                           i++;
                           if(i==a)
                           {
                               goto again;
                               printf("k");
                           }
                           goto rak;
                        }

                    }

                }
                if(flag==0)
                {
                   printf("YES\n");
                   printf("%d %d",i+1,j+1);
                   t=1;
                   goto again;
                }

            }


        }
    }
    again:;
    if(t==0)
    {
        printf("NO");
    }

}