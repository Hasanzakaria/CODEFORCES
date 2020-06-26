#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,x,n,m;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x>>n>>m;
        while(n)
        {
            if(x<=20)
            {
                break;
            }
            n--;
            x/=2;
            x+=10;
        }
        while(m)
        {
            m--;
            x-=10;
        }
        if(x<=0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}