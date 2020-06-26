#include<bits/stdc++.h>
using namespace std;
map<string,int>mp,cp,rp;
vector<string>v,t;
vector<string>::iterator l;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,maxx=-1,u,b;
    string a,c;
    cin>>n;
    pair<string,long long int>pq[n];
    for(i=1;i<=n;i++)
    {
        cin>>pq[i-1].first>>pq[i-1].second;
        if(mp[pq[i-1].first]==0)
        {
            mp[pq[i-1].first]=1;
            v.push_back(pq[i-1].first);
        }
        cp[pq[i-1].first]+=pq[i-1].second;
    }
    for(l=v.begin();l!=v.end();l++)
    {
        u=cp[*l];
        maxx=max(maxx,u);
    }
    for(l=v.begin();l!=v.end();l++)
    {
        u=cp[*l];
        if(u==maxx)
        {
          t.push_back(*l);
        }
    }
    for(l=t.begin();l!=t.end();l++)
    {
        rp[*l]=1;
    }
    cp.clear();
    for(i=0;i<n;i++)
    {
       a=pq[i].first;
       b=pq[i].second;
       if(rp[a]==1)
       {
           cp[a]+=b;
           if(cp[a]>=maxx)
           {
              c=a;
              break;
           }
       }
    }
    cout<<c<<"\n";

}