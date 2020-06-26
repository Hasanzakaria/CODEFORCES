#include<bits/stdc++.h>
using namespace std;
int mod(int r)
{
    if(r>=0)
    {
        r=r%1000000007;
    }
    else
    {
        while(r<0)
        {
            r+=1000000007;
        }
    }
    return r;
}
int main ()
{
    int a,b,c,k,t;
    cin>>a>>b>>c;
    k=c%6;
    if(k==1)
    {
        cout<<mod(a)<<endl;
    }
    else if(k==2)
    {
        cout<<mod(b)<<endl;
    }
    else if(k==3)
    {
       t=b-a;
       cout<<mod(t)<<endl;
    }
    else if(k==4)
    {
        a=-a;
        cout<<mod(a)<<endl;
    }
    else if(k==5)
    {
        b=-b;
        cout<<mod(b)<<endl;
    }
    else
    {
        t=-(b-a);
        cout<<mod(t)<<endl;
    }

}