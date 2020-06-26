#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        if(a==2)
        {
            cout<<2<<"\n";
        }
        else
        {
            if(a%2==0)
            {
                cout<<0<<"\n";
            }
            else
            {
                cout<<1<<"\n";
            }
        }
    }
}