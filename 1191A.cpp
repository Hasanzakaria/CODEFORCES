#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,k,l,r,t;
    cin>>a;
    k=a%4;
    l=(a+1)%4;
    r=(a+2)%4;
    if(k==1||l==1||r==1)
    {
        if(k==1)
        {
            cout<<0<<" "<<"A"<<"\n";
        }
        else if(l==1)
        {
            cout<<1<<" "<<"A"<<"\n";
        }
        else
        {
            cout<<2<<" "<<"A"<<"\n";
        }
    }
    else
    {
        t=max(k,l);
        t=max(t,r);
        if(t==k)
        {
           cout<<0<<" ";
        }
        else if(t==l)
        {
           cout<<1<<" ";
        }
        else
        {
            cout<<2<<" ";
        }
        if(t==3)
        {
            cout<<"B\n";
        }
        else if(t==2)
        {
            cout<<"C\n";
        }
        else
        {
            cout<<"D\n";
        }
    }

}