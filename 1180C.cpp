#include<bits/stdc++.h>
using namespace std;
deque<long long int>d;
vector<long long int>v;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,k,x,y,kk,r,f;
    cin>>n>>m;
    f=n-1;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        d.push_back(k);
    }
    pair<long long int,long long int>pq[n-1];
    for(i=1;i<n;i++)
    {
        x=d.front();
        d.pop_front();
        y=d.front();
        d.pop_front();
        pq[i-1].first=x;
        pq[i-1].second=y;
        if(x>y)
        {
            d.push_front(x);
            d.push_back(y);
        }
        else
        {
            d.push_front(y);
            d.push_back(x);
        }
    }
    kk=d.front();
    d.pop_front();
    while(!d.empty())
    {
        x=d.front();
        d.pop_front();
        v.push_back(x);
    }
    for(i=1;i<=m;i++)
    {
        cin>>r;
        if(r<n)
        {
           cout<<pq[r-1].first<<" "<<pq[r-1].second<<"\n";
        }
        else
        {
            r=r%f;
            if(r==0)
            {
                r=f;
            }
            cout<<kk<<" "<<v[r-1]<<"\n";
        }
    }



}