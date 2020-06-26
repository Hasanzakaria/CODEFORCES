#include<stdio.h>
#include<string.h>
int main ()
{
    char jak[150];
    gets(jak);
    int i,j,flag=0;
    i=strlen(jak);
    for(j=0;j<i;j++)
    {
        if(jak[j]=='H')
        {
           flag=1;
           break;
        }
        else if(jak[j]=='Q')
        {
            flag=1;
            break;
        }
        else if(jak[j]=='9')
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

}