#include<stdio.h>
#include<string.h>
int main ()
{
    char jak[150],tak[150],faq[150];
    gets(jak);
    gets(tak);
    gets(faq);
    int x,y,z,i,p=0,k=0,t=0;
    x=strlen(jak);
    y=strlen(tak);
    z=strlen(faq);
    for(i=0;i<x;i++)
    {
        if(jak[i]=='a'||jak[i]=='e'||jak[i]=='o'||jak[i]=='i'||jak[i]=='u')
        {
            p++;
        }
    }
    for(i=0;i<y;i++)
    {
        if(tak[i]=='a'||tak[i]=='e'||tak[i]=='i'||tak[i]=='o'||tak[i]=='u')
        {
            k++;
        }
    }
    for(i=0;i<z;i++)
    {
        if(faq[i]=='a'||faq[i]=='e'||faq[i]=='i'||faq[i]=='o'||faq[i]=='u')
        {
            t++;
        }
    }
    if(p==5 && k==7 && t==5)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}