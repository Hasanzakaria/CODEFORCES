#include<stdio.h>
#include<bits/stdc++.h>
int main ()
{
    int a,k,r;
    scanf("%d",&a);
    int ara[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&ara[i]);
    }
    k=std::__gcd(ara[0],ara[1]);
    for(i=2;i<a;i++)
    {
       k=std::__gcd(k,ara[i]);
    }
    r=k*a;
    printf("%d",r);
}