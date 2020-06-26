#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,minn,maxx,l,j,x,y,z,tt,flag;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        l=0;
        flag=0;
        cin>>a>>b;
        minn=b;
        maxx=b;
        for(j=1;j<=a;j++)
        {
            cin>>x>>y>>z;
            tt=x-l;
            minn=minn-tt;
            maxx=maxx+tt;
            if(z<minn||y>maxx)
            {
                flag=1;
            }
            else
            {
                minn=max(y,minn);
                maxx=min(z,maxx);
            }
            l=x;
        }
        if(flag==1)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }


    }


}