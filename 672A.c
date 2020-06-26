#include<stdio.h>
int main ()
{
    int n,k;
    double a,l,j;
    float t;
    scanf("%d",&n);
    if(n<10)
    {
        printf("%d",n);
    }
    else if(n>=10&&n<=189)
    {
        a=n-9;
        l=a/2;
        l=l+9;
        k=l;
        if(k==l)
        {
            k=k%10;
            printf("%d",k);
        }
        else
        {
            k=k+1;
            k=k/10;
            printf("%d",k);
        }


    }
    else if(n>=189)
    {
        a=n-189;
        l=a/3;
        l=l+99;
        k=l;
        j=l-k;
        if(k!=l)
        {
            k++;
        }
        j=j*3;
        t=j;
        if(t==1)
        {
            k=k/100;
            printf("%d",k);
        }
        else if(t==2)
        {
            k=k/10;
            k=k%10;
            printf("%d",k);
        }
        else if(t==0)
        {
            k=k%10;
            printf("%d",k);
        }
    }

}