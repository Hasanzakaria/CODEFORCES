#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,l,k,t,x,y;
    cin>>n>>m>>l;
    x=n;
    y=m;
    k=(n*m*2);
    if((k%l)==0)
    {
        if(l%2==0)
        {
            l/=2;
            t=__gcd(n,l);
            l/=t;
            n/=t;
            m/=l;
            cout<<"YES\n";
            cout<<0<<" "<<0<<"\n";
            cout<<n<<" "<<0<<"\n";
            cout<<0<<" "<<m<<"\n";
        }
        else
        {
            t=__gcd(n,l);
            l/=t;
            n/=t;
            m/=l;
            cout<<"YES\n";
            if(2*n<=x)
            {
                cout<<0<<" "<<0<<"\n";
                cout<<2*n<<" "<<0<<"\n";
                cout<<0<<" "<<m<<"\n";
            }
            else
            {
                cout<<0<<" "<<0<<"\n";
                cout<<n<<" "<<0<<"\n";
                cout<<0<<" "<<2*m<<"\n";
            }
        }

    }
    else
    {
        cout<<"NO\n";
    }

}