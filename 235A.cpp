#include<iostream>
#include<algorithm>
using namespace std;
long long int gcd(long long int a,long long int b)
{
    if(a%b==0)
    {
        return b;
    }
    return gcd(b,a%b);
}
int main ()
{
    long long int k,t,f,r,p,q,s,flag=0,ara[2];
    cin>>k;
    if(k==1)
    {
        cout<<1;
    }
    else if(k==2)
    {
        cout<<2;
    }
    else
    {
        if(k%2==0)
        {
            k--;
            flag=1;
        }
        t=gcd(k,k-1);
        f=k*(k-1);
        r=f/t;
        p=gcd(r,k-2);
        q=r*(k-2);
        s=q/p;
        if(flag==1)
        {
            k++;
            ara[0]=s;
            t=gcd(k,k-1);
            f=k*(k-1);
            r=f/t;
            p=gcd(r,k-3);
            q=r*(k-3);
            s=q/p;
            ara[1]=s;
            sort(ara,ara+2);
            s=ara[1];

        }
        cout<<s;
    }
}