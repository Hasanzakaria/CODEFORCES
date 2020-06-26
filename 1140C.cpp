#include<bits/stdc++.h>
using namespace std;
multiset<long long int>s;
multiset<long long int>::iterator l;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,i,f=0,sum,maxx=0;
    cin>>n>>k;
    pair<long long int,long long int>pq[n];
    for(i=0;i<n;i++)
    {
        cin>>pq[i].second>>pq[i].first;
    }
    sort(pq,pq+n);
    for(i=n-1;i>=0;i--)
    {
        sum=f+pq[i].second;
        maxx=max(maxx,pq[i].first*sum);
        if(k-1==0)
        {

        }
        else if(s.size()==k-1)
        {
            l=s.begin();
            if(*l<pq[i].second)
            {
                f-=*l;
                s.erase(l);
                f+=pq[i].second;
                s.insert(pq[i].second);
            }
        }
        else
        {
            s.insert(pq[i].second);
            f+=pq[i].second;
        }
    }
    cout<<maxx<<"\n";
}