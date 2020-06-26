#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum=0,k;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=ara[i];
    }
    sort(ara,ara+n);
    k=sum;
    sum-=ara[n-1];
    if(k%2==0&&sum>=ara[n-1])
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}