#include<stdio.h>
int main ()
{
        char jak[1000];
        gets(jak);
        int i,j,k,l,m,n,flag=0;
        for(j=0;jak[j]!='\0';j++)
        {

        }
        for(i=0;i<j;i++)
        {
                if(jak[i]=='h')
                {
                        for(k=i+1;k<j;k++)
                        {
                                if(jak[k]=='e')
                                {
                                        for(l=k+1;l<j;l++)
                                        {
                                                if(jak[l]=='l')
                                                {
                                                        for(m=l+1;m<j;m++)
                                                        {
                                                                if(jak[m]=='l')
                                                                {
                                                                        for(n=m+1;n<j;n++)
                                                                        {
                                                                                if(jak[n]=='o')
                                                                                {
                                                                                        printf("YES");
                                                                                        flag=1;
                                                                                        goto again;
                                                                                }
                                                                        }
                                                                }
                                                        }
                                                }
                                        }
                                }
                        }
                }
        }
        again:
        if(flag==0)
        {
                printf("NO");
        }
}