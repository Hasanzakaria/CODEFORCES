#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,c,k,tt;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c;
        k=c%3;
        if(k==0)
        {
            cout<<a<<"\n";
        }
        else if(k==1)
        {
            cout<<b<<"\n";
        }
        else
        {
            tt=a^b;
            cout<<tt<<"\n";
        }
    }
}