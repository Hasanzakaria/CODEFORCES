#include<bits/stdc++.h>
using namespace std;
map<int,int>mp,cp;
multiset<pair<int,int> >s,p;
multiset<pair<int,int> >::iterator ll;
pair<int,int>pq;
vector<int>v;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

int main ()
{
    int t,i,a,j,k,l,ini,fin,flag1,flag2,ans,x,u,f;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        ans=1;
        scanf("%d",&a);
        int ara[a];
        for(j=0;j<a;j++)
        {
            scanf("%d",&ara[j]);
            if(mp[ara[j]]==0)
            {
               v.push_back(ara[j]);
            }
            mp[ara[j]]++;
        }
        for(f=0;f<v.size();f++)
        {
           j=v[f];
           s.insert(make_pair(mp[j],j));
        }
        p=s;
        for(f=0;f<v.size();f++)
        {
            j=v[f];
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
                    u=cp[x];
                    ll=s.find(make_pair(u,x));
                    s.erase(ll);
                    s.insert(make_pair(u-1,x));
                    cp[x]--;
                }
                else if(ara[k]!=j)
                {
                    x=ara[k];
                    u=cp[x];
                    ll=s.find(make_pair(u,x));
                    s.erase(ll);
                    s.insert(make_pair(u-1,x));
                    cp[x]--;
                }
                if(ara[l]==j&&flag2==0)
                {
                    fin++;
                    flag2=1;
                    x=ara[l];
                    u=cp[x];
                    ll=s.find(make_pair(u,x));
                    s.erase(ll);
                    s.insert(make_pair(u-1,x));
                    cp[x]--;
                }
                else if(ara[l]!=j)
                {
                    x=ara[l];
                    u=cp[x];
                    ll=s.find(make_pair(u,x));
                    s.erase(ll);
                    s.insert(make_pair(u-1,x));
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
                   if(ini+fin+pq.first>ans)
                   {
                       ans=ini+fin+pq.first;
                   }
                }
            }

        }
        printf("%d\n",ans);
        mp.clear();
        cp.clear();
        s.clear();
        v.clear();
    }
}