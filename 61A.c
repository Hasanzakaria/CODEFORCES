#include<stdio.h>
int main ()
{
    char jak[200],tak[200],faq[100];
    gets(jak);
    gets(tak);
    int i,x;
    for(x=0;jak[x]!='\0';x++)
    {

    }
    for(i=0;i<x;i++)
    {
        if(jak[i]!=tak[i])
        {
            faq[i]='1';
        }
        else
        {
            faq[i]='0';
        }
    }
    faq[i]='\0';
    printf("%s",faq);

}