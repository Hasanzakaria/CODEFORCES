#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i,a1,b1,c1,d1,a2,b2,c2,d2,a3,b3,c3,d3,area,u,r,e,f,area1,flag=0;
    cin>>a1>>b1>>c1>>d1>>a2>>b2>>c2>>d2>>a3>>b3>>c3>>d3;
    area=(c1-a1)*(d1-b1);
    u=max(a1,a2);
    r=min(c1,c2);
    e=max(b1,b2);
    f=min(d1,d2);
    if(r>=u&&f>=e)
    {
        area1=((abs(r-u))*(abs(e-f)));
    }
    else
    {
        area1=0;
    }
    u=max(a1,a3);
    r=min(c1,c3);
    e=max(b1,b3);
    f=min(d1,d3);
    if(r>=u&&f>=e)
    {
        area1+=((abs(r-u))*(abs(e-f)));
    }
    u=max(u,a2);
    r=min(r,c2);
    e=max(e,b2);
    f=min(e,d2);
    if(r>=u&&f>=e)
    {
        area1-=((abs(r-u))*(abs(e-f)));
    }
    if(area-area1>0)
    {
        cout<<"YES\n";
    }
    else
    {
        for(i=b1; i<=d1; i++)
        {
            if(a1>=a2&&a1<=c2&&i>=b2&&i<=d2)
            {

            }
            else if(a1>=a3&&a1<=c3&&i>=b3&&i<=d3)
            {

            }
            else
            {
                flag=1;
            }
        }
        for(i=b1; i<=d1; i++)
        {
            if(c1>=a2&&c1<=c2&&i>=b2&&i<=d2)
            {

            }
            else if(c1>=a3&&c1<=c3&&i>=b3&&i<=d3)
            {

            }
            else
            {
                flag=1;
            }
        }
        for(i=a1;i<=c1;i++)
        {
            if(i>=a2&&i<=c2&&b1>=b2&&b1<=d2)
            {

            }
            else if(i>=a3&&i<=c3&&b1>=b3&&b1<=d3)
            {

            }
            else
            {
                flag=1;
            }
        }
         for(i=a1;i<=c1;i++)
        {
            if(i>=a2&&i<=c2&&d1>=b2&&d1<=d2)
            {

            }
            else if(i>=a3&&i<=c3&&d1>=b3&&d1<=d3)
            {

            }
            else
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
}