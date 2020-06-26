#include<bits/stdc++.h>
using namespace std;
vector<int>t,v;
vector<int>::iterator ll;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,i,a,b,l,j,tx,ty,p,maxx,minn,ans=-1;
    cin>>n>>m;
    int ara[n],jak[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        jak[i]=ara[i];
    }
    pair<int,int>pq[m];
    for(i=1;i<=m;i++)
    {
        cin>>pq[i-1].first>>pq[i-1].second;
    }
    for(i=0;i<n;i++)
    {
       l=i;
       maxx=-10000000;
       minn=10000000;
       for(j=0;j<m;j++)
       {
           tx=pq[j].first-1;
           ty=pq[j].second-1;
           if(l>ty||tx>l)
           {
              for(p=tx;p<=ty;p++)
              {
                  jak[p]--;
              }
              t.push_back(j+1);
           }
       }
       for(j=0;j<n;j++)
       {
          maxx=max(maxx,jak[j]);
          minn=min(minn,jak[j]);
       }
       ans=max(ans,maxx-minn);
       if(ans==maxx-minn)
       {
          v=t;
       }
       t.clear();
       for(j=0;j<n;j++)
       {
           jak[j]=ara[j];
       }
    }
    cout<<ans<<"\n";
    cout<<v.size()<<"\n";
    for(ll=v.begin();ll!=v.end();ll++)
    {
        cout<<*ll<<" ";
    }
}