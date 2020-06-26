#include<stdio.h>
int main ()
{
    int a,b,c,l;
    double k;
    scanf("%d %d %d",&a,&b,&c);
    if(c==0)
    {
        if(a==b)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else
    {
        k=b-a;
        k=k/c;
        l=k;
        if(l==k&&l>=0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }


    }
}