#include<bits/stdc++.h>
using namespace std;
multiset<pair<long long int,long long int> >mp;
multiset<pair<long long int,long long int> >::iterator l,f,u;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    pair<long long int,long long int>pq;
    long long int n,i,x,y,m,b,cou=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mp.insert(make_pair(ara[i],i));
    }
    l=mp.begin();
    f=mp.end();
    f--;
    while(l!=f)
    {
      u=l;
      u++;
      pq=*l;
      x=pq.first;
      pq=*u;
      y=pq.first;
      if(x==y)
      {
          pq=*l;
          m=pq.second;
          ara[m]=0;
          pq=*u;
          b=pq.second;
          ara[b]=x*2;
          mp.insert(make_pair(ara[b],b));
          l++;
          l++;
      }
      else
      {
          l++;
      }
      f=mp.end();
      f--;
    }
    for(i=0;i<n;i++)
    {
        if(ara[i])
        {
          cou++;
        }
    }
    cout<<cou<<"\n";
    for(i=0;i<n;i++)
    {
        if(ara[i])
        {
            cout<<ara[i]<<" ";
        }
    }

}