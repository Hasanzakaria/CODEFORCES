#include<stdio.h>
int main ()
{
    int a,i,b,k=0,l=0,flag=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&b);
        if(b==25)
        {
            k++;
        }
        else if(b==50)
        {
            l++;
            if(k>=1)
            {
                k=k-1;
            }
            else
            {
                printf("NO");
                flag=1;
                break;
            }
        }
        else if(b==100)
        {
            if(l>=1&&k>=1)
            {
                l=l-1;
                k=k-1;
            }
            else if(k>=3)
            {
                k=k-3;
            }
            else
            {
                printf("NO");
                flag=1;
                break;
            }

        }

    }
    if(flag==0)
    {
        printf("YES");
    }
}