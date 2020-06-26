#include<bits/stdc++.h>
using namespace std;
vector<pair<long long int,long long int> >v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,t=0,f,temp,a,b,r,x;
    cin>>n>>r;
    cin>>a>>b;
    pair<long long int,long long int>pq[n];
    for(i=1;i<=n;i++)
    {
        cin>>pq[i-1].first>>pq[i-1].second;
    }
    f=2*n-1;
    v.push_back(make_pair(a,b));
    while(f)
    {
        temp=(2*pq[t].first)-a;
        b=(2*pq[t].second)-b;
        a=temp;
        v.push_back(make_pair(a,b));
        t++;
        t%=n;
        f--;
    }
    x=v.size();
    cout<<v[r%x].first<<" "<<v[r%x].second<<"\n";

}