#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int tt,i,minn,maxx,a,b,f,x;
    double t,u;
    cin>>tt;
    for(i=1;i<=tt;i++)
    {
        cin>>a>>b;
        minn=min(a,b);
        maxx=max(a,b);
        t=maxx-minn;
        u=ceil((-1+sqrt(1+(4*2*t)))/2.0);
        x=u;
        f=(u*(u+1))/2;
        minn+=f;
        if((minn-maxx)%2==0)
        {
            cout<<u<<"\n";
        }
        else
        {
            if(x%2==0)
            {
                cout<<u+1<<"\n";
            }
            else
            {
                cout<<u+2<<"\n";
            }
        }
    }

}