#include<stdio.h>
int main ()
{
    int n,i,j,c;
    long long int ara[100000],max,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<n;i++)
    {
        max=0;
        min=1000000000000;
        for(j=0;j<n;j++)
        {
            if(i>j)
            {
                c=ara[i]-ara[j];
                if(c>max)
                {
                    max=c;
                }
                if(c<min&&c!=0)
                {
                    min=c;
                }
            }
            else
            {
                c=ara[j]-ara[i];
                if(c>max)
                {
                    max=c;
                }
                if(c<min&&c!=0)
                {
                    min=c;
                }
            }


         }
         printf("%I64d %I64d\n",min,max);
    }

}