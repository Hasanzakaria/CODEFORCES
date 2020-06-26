#include<stdio.h>
int main ()
{
        int a,b,i,c,k=1,flag=0;
        scanf("%d %d",&a,&b);
        for(i=1;i<a;i++)
        {
                scanf("%d",&c);
                if(i==k)
                {
                        k=k+c;
                        if(k==b)
                        {
                            flag=1;
                        }
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