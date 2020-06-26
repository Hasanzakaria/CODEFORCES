#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int a,b,c,d,l,f=0,y;
    cin>>a>>b>>c>>d;
    l=d-c+1;
    if(l==a)
    {
        cout<<0<<endl;
    }
    else
    {
        if(c==1)
        {
            if(b>d)
            {
                cout<<1+(b-d)<<endl;
            }
            else
            {
                cout<<1+(d-b)<<endl;
            }
        }
        else if(d==a)
        {
            if(b<c)
            {
                cout<<(c-b)+1<<endl;
            }
            else
            {
                cout<<(b-c)+1<<endl;
            }
        }
        else
        {
           if(b<c)
           {
             f+=(c-b)+1;
             f+=(d-c)+1;
           }
           else if(b>d)
           {
               f+=(b-d)+1;
               f+=(d-c)+1;
           }
           else
           {
             y=(b-c)+1+(d-c)+1;
             f=(d-b)+1+(d-c)+1;
             f=min(f,y);
           }
           cout<<f<<endl;
        }
    }
}