#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp,cp;
vector<pair<long long int,long long int> >v;
multiset<long long int>s,u;
multiset<long long int>::iterator l,l1;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,cou,cou1;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cou=0;
        cou1=0;
        cin>>a;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            if(mp[ara[j]]==0)
            {
              cou++;
            }
            if(mp[ara[j]]==1)
            {
                cou--;
            }
            mp[ara[j]]++;
            s.insert(ara[j]);
        }
        for(j=0;j<a-1;j++)
        {
            if(cp[ara[j]]==0)
            {
               cou1++;
            }
            if(cp[ara[j]]==1)
            {
                cou1--;
            }
            cp[ara[j]]++;
            mp[ara[j]]--;
            if(mp[ara[j]]==1)
            {
                cou++;
            }
            if(mp[ara[j]]==0)
            {
                cou--;
            }
            u.insert(ara[j]);
            l=s.find(ara[j]);
            s.erase(l);
            if(cou1==j+1&&cou==a-j-1)
            {
               l=u.end();
               l--;
               l1=s.end();
               l1--;
               if(cou1==*l&&cou==*l1)
               {
                  v.push_back(make_pair(cou1,cou));
               }

            }
        }
        mp.clear();
        cp.clear();
        cout<<v.size()<<"\n";
        pair<long long int,long long int>pq;
        for(j=0;j<v.size();j++)
        {
            pq=v[j];
            cout<<pq.first<<" "<<pq.second<<"\n";
        }
        s.clear();
        u.clear();
        v.clear();
    }


}