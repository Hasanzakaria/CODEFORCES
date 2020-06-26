#include<stdio.h>
int main ()
{
        char jak[1000];
        gets(jak);
        int j,i,count=0,k,flag=0;
        for(j=0;jak[j]!='\0';j++)
        {

        }

        for(i=0;i<j;i++)
        {
                flag=0;
                for(k=i-1;k>=0;k--)
                {
                        if(jak[i]==jak[k])
                        {
                           flag=1;
                           break;
                        }
                }
                if(flag==0)
                {
                        count++;
                }

        }
        if(count%2==0)
        {
                printf("CHAT WITH HER!");
        }
        else
        {
                printf("IGNORE HIM!");
        }


}