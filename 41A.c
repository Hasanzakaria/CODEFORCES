#include<stdio.h>
int main ()
{
        char jak[1000],tar[1000],ct[1000];
        int i,j,k,flag=0;
        gets(jak);
        gets(tar);
        for(i=0;jak[i]!='\0';i++)
        {

        }
        for(k=i-1,j=0;k>=0;k--,j++)
        {
                ct[j]=jak[k];
        }
        ct[j]='\0';
        for(j=0;j<i;j++)
        {
                if(tar[j]!=ct[j])
                {
                        printf("NO");
                        flag=1;
                        break;

                }
        }
        if(flag==0)
        {
                printf("YES");
        }

}