#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,u;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        u=a%b;
        if(u==0)
        {
            cout<<u<<"\n";
        }
        else
        {
            cout<<b-u<<"\n";
        }

    }
}