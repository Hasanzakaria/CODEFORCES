#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,c,d,e,k,minn=0,maxx=0;
    cin>>a>>b>>c>>d>>e;
    k=((c-1)*a)+((d-1)*b);
    if(e>k)
    {
        minn=min(a+b,(e-k));
    }
    if(c>d)
    {
        while(e>0&&b>0)
        {
            e-=d;
            b--;
            if(e>=0)
            {
              maxx++;
            }
        }
        while(e>0&&a>0)
        {
            e-=c;
            a--;
            if(e>=0)
            {
              maxx++;
            }
        }
    }
    else
    {
        while(e>0&&a>0)
        {
            e-=c;
            a--;
            if(e>=0)
            {
              maxx++;
            }
        }
        while(e>0&&b>0)
        {
            e-=d;
            b--;
            if(e>=0)
            {
              maxx++;
            }
        }
    }
    cout<<minn<<" "<<maxx<<"\n";

}