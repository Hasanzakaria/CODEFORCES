#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        if((b%2==0&&a%2!=0)||(b%2!=0&&a%2==0)||(a<b*b))
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }

}