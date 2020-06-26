#include<bits/stdc++.h>
using namespace std;
vector<pair<long long int,long long int> >v,t;
vector<long long int>u;
long long int bin(long long int f)
{
    long long int low=0,high=t.size()-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(f>=t[mid].first)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return low;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,sum,j,e,tx,ty,f,x,maxx=0,y=0;
    cin>>n>>m;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum+=ara[j];
            v.push_back(make_pair(j-i+1,sum));
        }
    }
    long long int tak[m];
    for(i=0;i<m;i++)
    {
        cin>>tak[i];
    }
    for(i=0;i<m;i++)
    {
        sum=0;
        for(j=i;j<m;j++)
        {
           sum+=tak[j];
           t.push_back(make_pair(sum,j-i+1));
        }
    }
    cin>>f;
    sort(t.begin(),t.end());
    pair<long long int,long long int>pq;
    for(i=0;i<t.size();i++)
    {
        pq=t[i];
        maxx=max(maxx,pq.second);
        u.push_back(maxx);
    }
    for(i=0;i<v.size();i++)
    {
        pq=v[i];
        tx=pq.second;
        ty=f/tx;
        x=bin(ty);
        if(x-1>=0)
        {
           y=max(y,u[x-1]*pq.first);
        }
    }
    cout<<y<<"\n";
}