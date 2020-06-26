#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,r;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        r=__gcd(a,b);
        if(r==1)
        {
            cout<<"Finite\n";
        }
        else
        {
            cout<<"Infinite\n";
        }
    }

}