#include<bits/stdc++.h>
using namespace std;
vector<pair<long long int,long long int> >v;
vector<pair<long long int,long long int> >::iterator ll;
vector<long long int>edge[101];
vector<long long int>::iterator l;
map<long long int,bool>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,j,i;
    cin>>n;
    for(i=1;i<n;i++)
    {
        v.push_back(make_pair(i,i+1));
        edge[i].push_back(i+1);
        edge[i+1].push_back(i);
        for(l=edge[i].begin();l!=edge[i].end();l++)
        {
           mp[*l]=1;
        }
        for(j=1;j<i;j++)
        {
            if(mp[j]==0)
            {
                v.push_back(make_pair(i+1,j));
                edge[i+1].push_back(j);
                edge[j].push_back(i+1);
            }
        }
        mp.clear();
    }
    cout<<v.size()<<"\n";
    pair<long long int,long long int>pq;
    for(ll=v.begin();ll!=v.end();ll++)
    {
        pq=*ll;
        cout<<pq.first<<" "<<pq.second<<"\n";
    }
}