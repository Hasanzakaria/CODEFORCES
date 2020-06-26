#include<stdio.h>
int main ()
{
    int n,i,a,b,k,p=1,r;
    scanf("%d",&n);
    int ara[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]==1)
        {
            a=i+1;
        }
        else if(ara[i]==n)
        {
            b=i+1;
        }
    }
    k=a-b;
    if(k<0)
    {
        k=-k;
    }
    if(k>p)
    {
        p=k;
    }
    r=a-1;
    if(r<0)
    {
        r=-r;
    }
    if(r>p)
    {
        p=r;
    }
    r=a-n;
     if(r<0)
    {
        r=-r;
    }
    if(r>p)
    {
        p=r;
    }
    r=b-1;
    if(r<0)
    {
        r=-r;
    }
    if(r>p)
    {
        p=r;
    }
     r=b-n;
     if(r<0)
    {
        r=-r;
    }
    if(r>p)
    {
        p=r;
    }
    printf("%d",p);






}