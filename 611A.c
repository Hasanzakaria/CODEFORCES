#include<stdio.h>
int main ()
{
    char str[100];
    gets(str);
    int x;
    for(x=0;str[x]!='\0';x++)
    {

    }
    if(str[8]=='k')
    {
        if(str[0]=='5')
        {
            printf("53");
        }
        else if(str[0]=='6')
        {
            printf("53");
        }
        else
        {
            printf("52");
        }
    }
    else
    {

         if(str[0]=='3'&&str[1]=='0')
        {
            printf("11");
        }
        else if(str[0]=='3'&&str[1]=='1')
        {
            printf("7");
        }
        else
        {
           printf("12");
        }
    }
}