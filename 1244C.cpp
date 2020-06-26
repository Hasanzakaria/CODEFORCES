#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,p,w,d,i,e,r,u,x=-1,y=-1,z=-1;
    cin>>n>>p>>w>>d;
    for(i=0;i<w;i++)
    {
        e=d*i;
        if(e<=p)
        {
            r=p-e;
            if(r%w==0)
            {
                r/=w;
                if(r+i<=n)
                {
                    x=r;
                    y=i;
                    z=n-x-y;
                    break;
                }
            }
        }
    }
    if(x==-1)
    {
        cout<<-1<<"\n";
    }
    else
    {
        cout<<x<<" "<<y<<" "<<z<<"\n";
    }
}