#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    string h;
    int a,b,c,f,r,i,l;
    cin>>a>>b>>c;
    l=min(a,b);
    if((2*l)==c)
    {
        for(i=1;i<=l;i++)
        {
            if(l==a)
            {
               h+="10";
            }
            else
            {
                h+="01";
            }
        }
        if(l==a)
        {
            for(i=1;i<=(b-l);i++)
            {
                h+='1';
            }
        }
        else
        {
            for(i=1;i<=(a-l);i++)
            {
                h+='0';
            }
        }
        cout<<h<<endl;
        goto dhaka;
    }
    if(c%2==0)
    {
        f=c-2;
    }
    else
    {
        f=c-1;
    }
    r=max(a,b);
    if(r==a)
    {
        while(f>0)
        {
            h+='0';
            h+='1';
            a--;
            b--;
            f-=2;
        }
        h+='0';
        a--;
        if(c%2==0)
        {
            for(i=1; i<=a; i++)
            {
                h+='0';
            }
            for(i=1; i<b; i++)
            {
                h+='1';
            }
            cout<<1<<h<<endl;
        }
        else
        {
            for(i=1; i<=a; i++)
            {
                h+='0';
            }
            for(i=1; i<=b; i++)
            {
                h+='1';
            }
            cout<<h<<endl;
        }
    }
    else
    {

        while(f>0)
        {
            h+='1';
            h+='0';
            a--;
            b--;
            f-=2;
        }
        h+='1';
        b--;
        if(c%2==0)
        {
            for(i=1; i<=b; i++)
            {
                h+='1';
            }
            for(i=1; i<a; i++)
            {
                h+='0';
            }
            cout<<0<<h<<endl;
        }
        else
        {
            for(i=1; i<=b; i++)
            {
                h+='1';
            }
            for(i=1; i<=a; i++)
            {
                h+='0';
            }
            cout<<h<<endl;
        }
    }
    dhaka:;
}