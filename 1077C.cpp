#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
vector<long long int>::iterator l;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum=0,maxx;
    cin>>n;
    pair<long long int,long long int>pq[n];
    for(i=0;i<n;i++)
    {
        cin>>pq[i].first;
        sum+=pq[i].first;
        pq[i].second=i+1;
    }
    sort(pq,pq+n);
    for(i=n-1;i>=0;i--)
    {
        if(i==n-1)
        {
            maxx=pq[i-1].first;
        }
        else
        {
            maxx=pq[n-1].first;
        }
        sum-=pq[i].first;
        sum-=maxx;
        if(sum==maxx)
        {
            v.push_back(pq[i].second);
        }
        sum+=maxx;
        sum+=pq[i].first;
    }
    cout<<v.size()<<endl;
    for(l=v.begin();l!=v.end();l++)
    {
        cout<<*l<<" ";
    }

}