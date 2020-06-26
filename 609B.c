#include<stdio.h>
int main ()
{
    long long int n,m,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,k=0,j=0,r,t;
    scanf("%I64d %I64d",&n,&m);
    long long int ara[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&ara[i]);
        if(ara[i]==1)
        {
           a++;
        }
        else if(ara[i]==2)
        {
           b++;
        }
        else if(ara[i]==3)
        {
            c++;
        }
        else if(ara[i]==4)
        {
            d++;
        }
        else if(ara[i]==5)
        {
            e++;
        }
        else if(ara[i]==6)
        {
            f++;
        }
        else if(ara[i]==7)
        {
            g++;
        }
        else if(ara[i]==8)
        {
            h++;
        }
        else if(ara[i]==9)
        {
            k++;
        }
        else if(ara[i]==10)
        {
            j++;
        }
    }
    r=(n*(n-1))/2;
    if(a>1)
    {
        t=(a*(a-1))/2;
        r=r-t;
    }
    if(b>1)
    {
        t=(b*(b-1))/2;
        r=r-t;
    }
    if(c>1)
    {
        t=(c*(c-1))/2;
        r=r-t;
    }
    if(d>1)
    {
        t=(d*(d-1))/2;
        r=r-t;
    }
    if(e>1)
    {
        t=(e*(e-1))/2;
        r=r-t;
    }
    if(f>1)
    {
        t=(f*(f-1))/2;
        r=r-t;
    }
    if(g>1)
    {
        t=(g*(g-1))/2;
        r=r-t;
    }
    if(h>1)
    {
        t=(h*(h-1))/2;
        r=r-t;
    }
    if(j>1)
    {
        t=(j*(j-1))/2;
        r=r-t;
    }
    if(k>1)
    {
        t=(k*(k-1))/2;
        r=r-t;
    }
    printf("%I64d",r);

}