#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,n,x,y,f;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>x>>y;
        if(n+1>x+y)
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<min(n,x+y-(n+1)+2)<<" ";
        }
        if(x+y>n)
        {
            f=n-y+(y-1);
        }
        else
        {
            f=(x+y)-y-1+(y-1);
        }
        cout<<f+1<<"\n";
    }

}