#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,r,x,e;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        r=min(a,b);
        x=max(a,b);
        e=max(2*r,x);
        cout<<e*e<<"\n";
    }
}