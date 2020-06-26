#include<bits/stdc++.h>
using namespace std;
vector<long long int>first,second;
map<long long int,long long int>mp,cp,rp[1000000];
long long int mod=998244353;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,ans=1,ans1=1,full,flag=0,f=1,cnt2=1;
    cin>>n;
    pair<long long int,long long int>pq[n];
    for(i=0;i<n;i++)
    {
        cin>>pq[i].first>>pq[i].second;
        first.push_back(pq[i].first);
        second.push_back(pq[i].second);
    }
    sort(first.begin(),first.end());
    sort(second.begin(),second.end());
    for(i=0;i<first.size();i++)
    {
        mp[first[i]]++;
        ans=((ans%mod)*(mp[first[i]]%mod))%mod;
    }
    for(i=0;i<second.size();i++)
    {
        cp[second[i]]++;
        ans1=((ans1%mod)*(cp[second[i]]%mod))%mod;
    }
    full=(ans+ans1)%mod;
    sort(pq,pq+n);
    for(i=0;i<n-1;i++)
    {
        if(pq[i+1].second<pq[i].second)
        {
            flag=1;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        f=((f%mod)*((i+1)%mod))%mod;
    }
    if(flag==1)
    {
        cout<<((f-full)+mod)%mod;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            rp[pq[i].first][pq[i].second]++;
            cnt2=((cnt2%mod)*(rp[pq[i].first][pq[i].second]%mod))%mod;
        }
        cout<<((f-full+cnt2)+mod)%mod;
    }
}