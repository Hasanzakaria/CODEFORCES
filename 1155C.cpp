#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,k,x,flag=0,t;
    cin>>n>>m;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    k=ara[1]-ara[0];
    for(i=1;i<n-1;i++)
    {
        k=__gcd(k,ara[i+1]-ara[i]);
    }
    for(i=1;i<=m;i++)
    {
        cin>>x;
        if(k%x==0)
        {
            flag=1;
            t=i;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
        cout<<ara[0]<<" "<<t<<"\n";
    }

}