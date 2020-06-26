#include<stdio.h>
int main ()
{
    char country[1000];
    gets(country);
    if(country[0]>=97&&country[0]<=122)
    {
        country[0]=country[0]-32;
    }
    printf("%s",country);
}