#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,n,a,b,c,d,minn,maxx,u,r;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>a>>b>>c>>d;
        minn=c-d;
        maxx=c+d;
        u=(a-b)*n;
        r=(a+b)*n;
        if(u>maxx||r<minn)
        {
             cout<<"No\n";

        }
        else
        {
           cout<<"Yes\n";
        }

    }
}