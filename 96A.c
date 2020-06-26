#include<stdio.h>
int main ()
{
    char jak[100];
    gets(jak);
    int i,j,k,count=0,flag=0;
    for(i=0;jak[i]!='\0';i++)
    {

    }
    for(j=0;j<i;j++)
    {
        if(j==0)
        {
            k=jak[j];
        }
        if(k==jak[j])
        {
            count++;
            if(count>=7)
            {
                printf("YES");
                flag=1;
                break;

            }

        }
        else
        {
            count=1;
            k=jak[j];
        }
    }
    if(flag==0)
    {
        printf("NO");
    }
}