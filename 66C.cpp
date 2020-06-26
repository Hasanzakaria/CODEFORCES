#include<bits/stdc++.h>
using namespace std;
vector<long long int>g[100000];
bool vis[100000];
vector<string>v;
map<string,long long int>mp;
vector<long long int>uniquee;
long long int cou=0,cou1=0;
void dfs(long long int y)
{
    long long int t,i;
    if(vis[y])
    {
        return ;
    }
    vis[y]=1;
    cou++;
    t=g[y].size();
    if(t==0)
    {
        cou1++;
    }
    for(i=0; i<t; i++)
    {
        dfs(g[y][i]);
    }
}
void separate(string s)
{
    string t;
    long long int tt,i;
    tt=s.size();
    for(i=0; i<tt; i++)
    {
        if(s[i]=='\\')
        {
            t=t+s[i];
            v.push_back(t);
            t.clear();
            continue;
        }
        t=t+s[i];
    }
    v.push_back(t);
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s,p;
    long long int u,x=1,l,i,t,ans=0,ans1=0;
    while(cin>>s)
    {
        separate(s);
        u=v.size();
        p=p+v[0];
        p=p+v[1];
        if(mp[p]==0)
        {
            mp[p]=x;
            l=mp[p];
            uniquee.push_back(l);
            x++;
        }
        else
        {
            l=mp[p];
        }
        for(i=2; i<u; i++)
        {
            p=p+v[i];
            if(mp[p]==0)
            {
                mp[p]=x;
                t=mp[p];
                g[l].push_back(t);
                x++;
            }
            else
            {
                t=mp[p];
            }
            l=t;
        }
        v.clear();
        p.clear();
    }
    u=uniquee.size();
    for(i=0; i<u; i++)
    {
        dfs(uniquee[i]);
        ans=max(ans,cou-cou1-1);
        ans1=max(ans1,cou1);
        cou=0;
        cou1=0;
    }
    cout<<ans<<" "<<ans1<<"\n";
}