#include<stdio.h>
int main ()
{
    int n,i,flag=0,t=0,k=0,l=0,d=0,g=0;
    scanf("%d ",&n);
    char jak[n+1];
    for(i=0; i<n; i++)
    {
        scanf("%c",&jak[i]);
    }
    jak[n]='\0';
    for(i=0; i<n; i++)
    {
        if(jak[i]=='a'&&flag==0)
        {
            flag=1;
            printf("%c",jak[i]);
        }
        else if(jak[i]=='i'&&t==0)
        {
            t=1;
            printf("%c",jak[i]);
        }
        else if(jak[i]=='u'&&k==0)
        {
            k=1;
            printf("%c",jak[i]);
        }
        else if(jak[i]=='y'&&l==0)
        {
            l=1;
            printf("%c",jak[i]);
        }
        else if(jak[i]=='e'&&d==0)
        {
            if(jak[i+1]=='e'&&jak[i+2]!='e')
            {
                printf("%c%c",jak[i],jak[i+1]);
            }
            else
            {
                printf("%c",jak[i]);
            }
            d=1;
        }
        else if(jak[i]=='o'&&g==0)
        {
            if(jak[i+1]=='o'&&jak[i+2]!='o')
            {
                printf("%c%c",jak[i],jak[i+1]);
            }
            else
            {
                printf("%c",jak[i]);
            }
            g=1;
        }
        else if(jak[i]!='a'&&jak[i]!='e'&&jak[i]!='i'&&jak[i]!='o'&&jak[i]!='u'&&jak[i]!='y')
        {
            flag=0;
            t=0;
            k=0;
            l=0;
            d=0;
            g=0;
            printf("%c",jak[i]);
        }
        else if(jak[i]!=jak[i-1])
        {
            flag=0;
            t=0;
            k=0;
            l=0;
            d=0;
            g=0;
            i--;

        }




    }
}