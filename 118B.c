#include<stdio.h>
int main ()
{
    int a,i,j,k,u,l;
    scanf("%d",&a);
    for(i=1;i<=a+1;i++)
    {
        u=-1;
        for(j=a+1-i;j>0;j--)
        {
            printf("  ");
        }
        for(k=2*i-1;k>0;k--)
        {
            if(k>=i)
            {
                u++;
                printf("%d",u);
                if(i!=1)
                {
                    printf(" ");
                }

            }
            else
            {
                u--;
                printf("%d",u);
                if(k!=1)
                {
                    printf(" ");
                }


            }
        }
        printf("\n");
    }
    l=a+1;
    for(i=a+2;i<=2*a+1;i++)
    {
        l--;
        u=-1;
        for(j=i-(a+1);j>0;j--)
        {
            printf("  ");

        }
        for(k=2*l-1;k>0;k--)
        {
            if(k>=l)
            {
                u++;
                printf("%d",u);
                if(i!=(2*a+1))
                {
                    printf(" ");
                }


            }
            else
            {
                u--;
                printf("%d",u);
                if(k!=1)
                {
                    printf(" ");
                }
            }
        }
        printf("\n");

    }
}