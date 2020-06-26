#include<stdio.h>
#include<string.h>
int main ()
{
    int a,p=1,t=0,i;
    scanf("%d ",&a);
    char jak[50],tak[50],faq[50];
    gets(jak);
    for(i=1;i<a;i++)
    {
        gets(tak);
        if(!strcmp(jak,tak))
        {
            p++;
        }
        else
        {
            t++;
            strcpy(faq,tak);
        }
    }
    if(p>t)
    {
        printf("%s",jak);
    }
    else
    {
        printf("%s",faq);
    }
}