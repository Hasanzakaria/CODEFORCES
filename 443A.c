#include<stdio.h>
int main ()
{
        char jak[2000],ctf[1500];
        gets(jak);
        int x,i,j,count=0,p=0,falg=0,k;
        for(x=0;jak[x]!='\0';x++)
        {

        }
        for(i=0,j=1;j<x-1;i++,j=j+3)
        {
                ctf[i]=jak[j];
                count++;
        }
        ctf[i]='\0';
        for(i=0;i<count;i++)
        {
                k=ctf[i];
                falg=0;
                for(j=i-1;j>=0;j--)
                {
                        if(k==ctf[j])
                        {
                             falg=1;

                        }
                }
                if(falg==0)
                {
                        p++;
                }

        }
        printf("%d",p);

}