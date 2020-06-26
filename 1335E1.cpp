#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp,cp;
multiset<pair<long long int,long long int> >s,p;
multiset<pair<long long int,long long int> >::iterator ll;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,k,l,ini,fin,flag1,flag2,ans,x,u;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ans=1;
        cin>>a;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            mp[ara[j]]++;
        }
        for(j=1;j<=200;j++)
        {
           s.insert(make_pair(mp[j],j));
        }
        p=s;
        pair<long long int,long long int>pq;
        for(j=1;j<=200;j++)
        {
            k=0;
            l=a-1;
            ini=0;
            fin=0;
            flag1=0;
            flag2=0;
            cp=mp;
            s=p;
            while(k<l)
            {
                if(ara[k]==j&&flag1==0)
                {
                    ini++;
                    flag1=1;
                    x=ara[k];
                    ll=s.find(make_pair(cp[x],x));
                    s.erase(ll);
                    s.insert(make_pair(cp[x]-1,x));
                    cp[x]--;
                }
                else if(ara[k]!=j)
                {
                    x=ara[k];
                    ll=s.find(make_pair(cp[x],x));
                    s.erase(ll);
                    s.insert(make_pair(cp[x]-1,x));
                    cp[x]--;
                }
                if(ara[l]==j&&flag2==0)
                {
                    fin++;
                    flag2=1;
                    x=ara[l];
                    ll=s.find(make_pair(cp[x],x));
                    s.erase(ll);
                    s.insert(make_pair(cp[x]-1,x));
                    cp[x]--;
                }
                else if(ara[l]!=j)
                {
                    x=ara[l];
                    ll=s.find(make_pair(cp[x],x));
                    s.erase(ll);
                    s.insert(make_pair(cp[x]-1,x));
                    cp[x]--;
                }
                if(ini<fin)
                {
                    k++;
                }
                else if(fin<ini)
                {
                    l--;
                }
                else
                {
                   k++;
                   l--;
                   flag1=0;
                   flag2=0;
                   ll=s.end();
                   ll--;
                   pq=*ll;
                   ans=max(ans,ini+fin+pq.first);
                }
            }

        }
        cout<<ans<<"\n";
        mp.clear();
        cp.clear();
        s.clear();
    }
}