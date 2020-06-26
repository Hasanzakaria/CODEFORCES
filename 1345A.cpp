#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i,t,a,b;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        if(a==1||b==1||(a==2&&b==2))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

}