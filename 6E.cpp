#include<bits/stdc++.h>
using namespace std;
multiset<long long int>mp;
multiset<long long int>::iterator l,p;
vector<pair<long long int,long long int> >v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pair<long long int,long long int>pq;
    long long int n,k,i,j,u=-1,maxx=0,t;
    cin>>n>>k;
    long long int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    i=0;
    j=-1;
    while(1)
    {
        if(u>k)
        {
            while(u>k)
            {
                l=mp.find(ara[i]);
                mp.erase(l);
                l=mp.begin();
                p=mp.end();
                p--;
                u=*p-*l;
                i++;
            }
            if(maxx==j-i+1)
            {
                v.push_back(make_pair(i,j));
            }
            else if(j-i+1>maxx)
            {
                v.clear();
                v.push_back(make_pair(i,j));
            }
            maxx=max(maxx,j-i+1);
        }
        j++;
        if(j==n)
        {
            break;
        }
        mp.insert(ara[j]);
        l=mp.begin();
        p=mp.end();
        p--;
        u=*p-*l;
        if(u<=k)
        {
            if(maxx==j-i+1)
            {
                v.push_back(make_pair(i,j));
            }
            else if(j-i+1>maxx)
            {
                v.clear();
                v.push_back(make_pair(i,j));
            }
            maxx=max(maxx,j-i+1);
        }
    }
    cout<<maxx<<" ";
    cout<<v.size()<<"\n";
    for(i=0;i<v.size();i++)
    {
        pq=v[i];
        cout<<pq.first+1<<" "<<pq.second+1<<"\n";
    }
}