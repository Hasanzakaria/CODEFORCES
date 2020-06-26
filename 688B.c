#include<stdio.h>
#include<string.h>
int main ()
{
    char jak[1000000],tak[1000000];
    gets(jak);
    strcpy(tak,jak);
    strrev(tak);
    printf("%s",jak);
    printf("%s",tak);


}