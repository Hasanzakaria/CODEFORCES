#include<stdio.h>
int main ()
{
    char jak[100],ctf[100];
    gets(jak);
    int i,j,count=0,p=0;
    for(j=0;jak[j]!='\0';j++)
    {

    }
    for(i=0;i<j;i++)
    {
        if(jak[i]>=97&&jak[i]<=122)
        {
            count++;
        }
        if(jak[i]>=65&&jak[i]<=90)
        {
          p++;
        }
    }
    if(count>p)
    {
        for(i=0;i<j;i++)
        {
            if(jak[i]>=65&&jak[i]<=90)
            {
                ctf[i]=jak[i]+32;
            }
            else
            {
                ctf[i]=jak[i];
            }
        }
        ctf[i]='\0';
    }
    if(p>count)
    {
        for(i=0;i<j;i++)
        {
            if(jak[i]>=97&&jak[i]<=122)
            {
                ctf[i]=jak[i]-32;
            }
            else
            {
                ctf[i]=jak[i];
            }
        }
        ctf[i]='\0';
    }
    if(p==count)
    {
        for(i=0;i<j;i++)
        {
            if(jak[i]>=65&&jak[i]<=90)
            {
                ctf[i]=jak[i]+32;
            }
            else
            {
                ctf[i]=jak[i];
            }
        }
        ctf[i]='\0';
    }
    printf("%s",ctf);
}