#include<stdio.h>
int main ()
{
    int t,a,i,count;
    double k,j;
    scanf("%d",&t);
    for(a=1;a<=t;a++)
    {
        count=0;
        scanf("%d",&i);
        for(j=3;j<=360;j++)
        {
           k=((j-2)*180)/j;
           if(k==i)
           {
                printf("YES\n");
                break;
           }
           else
           {
                count=1+count;
           }
        }

        if(count==(361-3))
        {
            printf("NO\n");
        }
    }

}