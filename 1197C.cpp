#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,i,ans=0;
    cin>>n>>k;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=1;i<n;i++)
    {
        v.push_back(ara[i]-ara[i-1]);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n-k;i++)
    {
        ans+=v[i];
    }
    cout<<ans<<"\n";
}