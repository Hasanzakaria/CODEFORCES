#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,x,t,r,f,minn=1e18;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        t=i-1;
        r=n-i;
        f=max(t,r);
        minn=min(minn,x/f);
    }
    cout<<minn<<"\n";
}