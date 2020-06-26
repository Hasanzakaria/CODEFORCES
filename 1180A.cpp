#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,t,r=4;
    cin>>n;
    if(n==1)
    {
        cout<<1<<"\n";
    }
    else
    {
        t=1;
        for(i=2;i<=n;i++)
        {
            t+=(r*(i-1));
        }
        cout<<t<<"\n";
    }

}