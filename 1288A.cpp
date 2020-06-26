#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,b,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a>=b)
        {
           cout<<"YES\n";
        }
        else
        {
            k=(a-1)*(a-1);
            k-=4*(b-a);
            if(k>=0)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
    }
}