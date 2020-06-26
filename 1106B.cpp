#include<bits/stdc++.H>
using namespace std;
map<long long int,long long int>mp;
map<long long int,long long int>cp;
multiset<pair<long long int,long long int> >s;
multiset<pair<long long int,long long int> >::iterator l;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,t,u,ans;
    pair<long long int,long long int>pq;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>t;
        mp[i+1]=t;
    }
    for(i=0;i<n;i++)
    {
        cin>>t;
        cp[i+1]=t;
        s.insert(make_pair(t,i+1));
    }
    for(i=1;i<=m;i++)
    {
       cin>>t>>u;
       ans=0;
       if(mp[t]>=u)
       {
          mp[t]-=u;
          ans+=(cp[t]*u);
          u=0;
       }
       else
       {
           ans+=(cp[t]*mp[t]);
           u-=mp[t];
           mp[t]=0;
           while(!s.empty())
           {
               l=s.begin();
               pq=*l;
               if(mp[pq.second]>=u)
               {
                   ans+=(cp[pq.second]*u);
                   mp[pq.second]-=u;
                   u=0;
                   break;
               }
               else
               {
                  ans+=(cp[pq.second]*mp[pq.second]);
                  u-=mp[pq.second];
                  mp[pq.second]=0;
                  s.erase(l);
               }
           }
       }
       if(u>0)
       {
           cout<<0<<"\n";
           continue;
       }
       cout<<ans<<"\n";
    }
}