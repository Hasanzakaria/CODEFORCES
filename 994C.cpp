#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int a,b,c,d,aa,bb,cc,dd,x,y,z,s,xx,yy,zz,ss;
    cin>>a>>b>>c>>d>>aa>>bb>>cc>>dd;
    x=min(a,c);
    x=min(x,aa);
    x=min(x,cc);
    y=max(a,c);
    y=max(y,aa);
    y=max(y,cc);
    z=min(b,d);
    z=min(z,bb);
    z=min(z,dd);
    s=max(b,d);
    s=max(s,bb);
    s=max(s,dd);
    cin>>a>>b>>c>>d>>aa>>bb>>cc>>dd;
    xx=min(a,c);
    xx=min(xx,aa);
    xx=min(xx,cc);
    yy=max(a,c);
    yy=max(yy,aa);
    yy=max(yy,cc);
    zz=min(b,d);
    zz=min(zz,bb);
    zz=min(zz,dd);
    ss=max(b,d);
    ss=max(ss,bb);
    ss=max(ss,dd);
    if(yy<x||xx>y||zz>s||z>ss)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }


}