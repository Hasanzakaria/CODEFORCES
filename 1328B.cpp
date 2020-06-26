#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,tt,i,r,u,t,e,rr;
    double k;
    cin>>tt;
    for(i=1;i<=tt;i++)
    {
        cin>>a>>b;
        k=floor((-1+sqrt(1+(4*2*b)))/2.0);
        rr=k;
        r=(rr*(rr+1))/2;
        u=a-2-(rr-1);
        for(t=1;t<u;t++)
        {
            cout<<"a";
        }
        e=b-r;
        if(e>0)
        {
            cout<<"b";
            e--;
            for(t=1;t<=rr-e;t++)
            {
                cout<<"a";
            }
            cout<<"b";
            for(t=1;t<=e;t++)
            {
                cout<<"a";
            }

        }
        else
        {
            if(rr-1!=a-2)
            {
                cout<<"a";
            }
            cout<<"bb";
            for(t=1;t<=rr-1;t++)
            {
                cout<<"a";
            }

        }
        cout<<"\n";

    }

}