#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
long long int mod=998244353;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,i,sum=0,ans=1,f,t,flag=0,u;
    cin>>n>>k;
    pair<long long int,long long int>ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i].first;
        ara[i].second=i+1;
    }
      u=k;
    sort(ara,ara+n);
    for(i=n-1;i>=0;i--)
    {
        if(k>0)
        {
            sum+=ara[i].first;
            k--;
            v.push_back(ara[i].second);
        }
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size()-1;i++)
    {
        f=v[i+1]-v[i];
        ans=((ans%mod)*(f%mod))%mod;
    }
    cout<<sum<<" "<<ans<<"\n";
}