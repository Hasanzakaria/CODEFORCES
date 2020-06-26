#include<bits/stdc++.h>
using namespace std;
multiset<long long int>starting,ending;
multiset<long long int>::iterator l,p;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,x,y,k=0;
    cin>>n;
    pair<long long int,long long int>pq[n];
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        pq[i-1].first=x;
        pq[i-1].second=y;
        starting.insert(x);
        ending.insert(y);
    }
    for(i=0;i<n;i++)
    {
        l=starting.find(pq[i].first);
        p=ending.find(pq[i].second);
        starting.erase(l);
        ending.erase(p);
        p=ending.begin();
        l=starting.end();
        l--;
        if(*l<=*p)
        {
            k=max(k,(*p)-(*l));
        }
        starting.insert(pq[i].first);
        ending.insert(pq[i].second);
    }
    cout<<k<<"\n";

}