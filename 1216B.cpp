#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum=0;
    cin>>n;
    pair<long long int,long long int>pq[n];
    for(i=0;i<n;i++)
    {
        cin>>pq[i].first;
        pq[i].second=i+1;
    }
    sort(pq,pq+n);
    reverse(pq,pq+n);
    for(i=0;i<n;i++)
    {
        sum+=(i*pq[i].first)+1;
        v.push_back(pq[i].second);
    }
    cout<<sum<<"\n";
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}