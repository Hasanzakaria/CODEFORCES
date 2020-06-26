#include<bits/stdc++.h>
using namespace std;
long long int ara[200000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,b,flag=0;
    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>a>>b;
        ara[a]++;
        ara[b]++;
    }
    for(i=1;i<=n;i++)
    {
        if(ara[i]==2)
        {
            flag=1;
        }
    }
    if(flag)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }
}