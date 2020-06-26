#include<stdio.h>
int main ()
{
    int n,m,temp,flag=0;
    scanf("%d %d",&n,&m);
    int ara[m],i,j;
    for(i=0;i<m;i++)
    {
        scanf("%d",&ara[i]);
    }
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<m-1;j++)
        {
            if(ara[j]>ara[j+1])
            {
               temp=ara[j];
               ara[j]=ara[j+1];
               ara[j+1]=temp;
            }
        }
    }
    if(ara[0]==1||ara[m-1]==n)
    {
        printf("NO");
    }
    else
    {
        for(i=0;i<m-2;i++)
        {
            if(ara[i+1]-ara[i]==1)
            {
                if(ara[i+2]-ara[i+1]==1)
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

}