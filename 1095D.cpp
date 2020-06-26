#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp[200001];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,cou=1,k,first,second;
    cin>>n;
    pair<long long int,long long int>pq[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>pq[i].first>>pq[i].second;
        mp[i][pq[i].first]=1;
        mp[i][pq[i].second]=1;
    }
    if(n==3)
    {
        cout<<1<<" "<<2<<" "<<3<<"\n";
        return 0;
    }
    cout<<1<<" ";
    k=1;
    while(cou!=n)
    {
        first=pq[k].first;
        second=pq[k].second;
        if(mp[first][second]==1)
        {
            cout<<first<<" ";
            k=first;
        }
        else
        {
            cout<<second<<" ";
            k=second;
        }
        cou++;
    }
}