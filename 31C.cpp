#include<bits/stdc++.h>
using namespace std;
set<pair<long long int,long long int> >s;
set<pair<long long int,long long int> >::iterator l,p;
vector<long long int>r;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j,flag,cou=0;
    cin>>n;
    pair<long long int,long long int>pq[n];
    for(i=0;i<n;i++)
    {
        cin>>pq[i].first>>pq[i].second;
        s.insert(make_pair(pq[i].first,pq[i].second));
    }
    for(i=0;i<n;i++)
    {
        l=s.find(make_pair(pq[i].first,pq[i].second));
        s.erase(l);
        flag=0;
        l=s.begin();
        p=l;
        p++;
        while(p!=s.end())
        {
            if((*p).first<(*l).second)
            {
                flag=1;
                break;
            }
            l=p;
            p++;
        }
        if(flag==0)
        {
           r.push_back(i+1);
        }
        s.insert(make_pair(pq[i].first,pq[i].second));
    }
    cout<<r.size()<<"\n";
    for(i=0;i<r.size();i++)
    {
        cout<<r[i]<<" ";
    }

}