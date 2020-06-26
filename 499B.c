#include<stdio.h>
#include<string.h>
int main ()
{
    int n,m,i,x,y,k,j;
    scanf("%d %d ",&n,&m);
    char jak[m][20],tak[m][20],faq[n][20];
    for(i=0;i<m;i++)
    {
        scanf("%s %s",&jak[i],&tak[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%s",&faq[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(!strcmp(faq[i],jak[j]))
            {
                x=strlen(jak[j]);
                y=strlen(tak[j]);
                if(y<x)
                {
                   printf("%s ",tak[j]);
                   break;
                }
                else
                {
                    printf("%s ",jak[j]);
                    break;
                }
            }
        }
    }





}