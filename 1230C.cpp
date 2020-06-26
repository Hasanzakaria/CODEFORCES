#include<bits/stdc++.h>
using namespace std;
vector<pair<long long int,long long int> >v;
long long int ara[]={1,2,3,4,5,6,1},n,anss;
bool vis[8];
long long int ans[8],cou;
map<long long int,long long int>mp[8];
void check()
{
    long long int i,u,p,x,r,mi,ma,j;
    pair<long long int,long long int>pq;
    for(i=0;i<v.size();i++)
    {
        pq=v[i];
        u=pq.first;
        p=pq.second;
        x=ans[u];
        r=ans[p];
        mi=min(x,r);
        ma=max(x,r);
        mp[mi][ma]=1;
    }
    for(i=1;i<=6;i++)
    {
        for(j=i;j<=6;j++)
        {
            if(mp[i][j]==1)
            {
                cou++;
            }
        }
    }
    anss=max(anss,cou);
    for(i=1;i<=6;i++)
    {
        mp[i].clear();
    }
    cou=0;
}
void backtrack(long long int pos)
{
    if(pos==n+1)
    {
        check();
        return;
    }
    long long int i;
    for(i=0;i<7;i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            ans[pos]=ara[i];
            backtrack(pos+1);
            vis[i]=0;
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int k,i,a,b;
    cin>>n>>k;
    for(i=1;i<=k;i++)
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    backtrack(1);
    cout<<anss<<"\n";
}