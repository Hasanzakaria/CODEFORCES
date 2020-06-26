#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,minn,maxx,sum;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        if((a==0&&b!=0)||(b==0&&a!=0))
        {
            cout<<"NO\n";
        }
        else if((a+b)%3==0)
        {
            minn=min(a,b);
            maxx=max(a,b);
            if(maxx<=(minn*2))
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            cout<<"NO\n";
        }
    }


}