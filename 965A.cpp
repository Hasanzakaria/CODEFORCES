#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int a,b,c,d,r,t,p,q;
    cin>>a>>b>>c>>d;
    r=b/c;
    if(b%c!=0)
    {
        r++;
    }
    t=r*a;
    p=t/d;
    if(t%d!=0)
    {
        p++;
    }
    cout<<p<<endl;

}