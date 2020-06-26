#include<bits/stdc++.h>
using namespace std;
vector<pair<long long int,long long int> >v;
map<long long int,long long int>mp;
long long int pre[1000000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,j,f,countt,minn,maxx,x,y,zero,one,two,minnn,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        minnn=1e12;
        cin>>a>>b;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        f=a-1;
        for(j=0;j<a/2;j++)
        {
            countt=ara[j]+ara[f];
            minn=min(ara[j],ara[f]);
            maxx=max(ara[j],ara[f]);
            v.push_back(make_pair(minn,maxx));
            f--;
            mp[countt]++;
        }
        pair<long long int,long long int>pq;
        for(j=0;j<v.size();j++)
        {
            pq=v[j];
            x=pq.first;
            y=pq.second;
            pre[x+1]+=1;
            pre[y+b+1]-=1;
        }
        for(j=1;j<=2*b+10;j++)
        {
            pre[j]+=pre[j-1];
        }
        for(j=2;j<=2*b;j++)
        {
            zero=mp[j];
            one=pre[j]-zero;
            two=(a/2)-zero-one;
            ans=one+(two*2);
            minnn=min(minnn,ans);
        }
        cout<<minnn<<"\n";
        mp.clear();
        for(j=0;j<=2*b+10;j++)
        {
            pre[j]=0;
        }
        v.clear();
    }
}