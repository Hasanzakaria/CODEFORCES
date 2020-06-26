#include<stdio.h>
int main ()
{
    int a,i,j,k=65,l=97,count=0;
    scanf("%d ",&a);
    char jak[a+1];
    gets(jak);
    for(i=0;i<26;i++)
    {
        for(j=0;j<a;j++)
        {
            if(jak[j]==k||jak[j]==l)
            {
                count++;
                k++;
                l++;
            }
        }
    }
    if(count==26)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}