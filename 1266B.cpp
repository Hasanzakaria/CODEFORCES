#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        if(a>14&&a%14>=1&&a%14<=6)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}