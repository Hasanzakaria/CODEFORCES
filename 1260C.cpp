#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,c,minn,maxx;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        minn=min(a,b);
        maxx=max(a,b);
        if((__gcd(minn,maxx)+((c-1)*minn))<maxx)
        {
            cout<<"REBEL\n";
        }
        else
        {
            cout<<"OBEY\n";
        }
    }

}