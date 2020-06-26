#include<stdio.h>
int main ()
{
    char jak[1000],str[1000];
    gets(jak);
    int j,i,k,ara[100],count=0,temp,l;
    for(j=0;jak[j]!='\0';j++)
    {

    }
    for(i=0,k=0;i<j;i++)
    {
        if(i%2==0)
        {
            ara[k]=jak[i];
            k++;
            count++;
        }
    }
    for(i=0;i<count-1;i++)
    {
        for(k=0;k<count-1;k++)
        {
            if(ara[k]>ara[k+1])
            {
               temp=ara[k];
               ara[k]=ara[k+1];
               ara[k+1]=temp;
            }
        }

    }
    l=count+(count-1);
    for(i=0,k=0;i<l;i++)
    {
        if(i%2==0)
        {
            str[i]=ara[k];
            k++;
        }
        else
        {
            str[i]='+';
        }
    }
    str[i]='\0';
    printf("%s",str);

}