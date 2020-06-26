#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;
map<int,int>mp;
map<int,int>::iterator p;
vector<int>edge[100001];
vector<int>::iterator k;
bool vis[100001];
int ara[100001];
int n,m;
void bfs(int x)
{
    int t,o,h,f,cou=0,c;
    vis[x]=1;
    p=mp.find(x);
    h=p->second;
    if(h==1)
    {
       ara[x]++;
    }
    queue<int>a;
    a.push(x);
    while(!a.empty())
    {
       f=0;
       c=0;
       t=a.front();
       a.pop();
       for(k=edge[t].begin();k!=edge[t].end();k++)
       {
         o=*k;
         c++;
         if(vis[o]==0)
         {
            vis[o]=1;
            p=mp.find(o);
            h=p->second;
            if(h==1)
            {
                ara[o]=ara[t]+1;
                if(ara[o]<=m)
                {
                    a.push(o);
                }
            }
            else
            {
                ara[o]=0;
                a.push(o);
            }
         }
         else
         {
           f++;
         }
       }
       if(f==1&&c==1)
       {
         cou++;
       }
    }
    cout<<cou;
}
int main ()
{
    int i,a,b,c;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        mp.insert(make_pair(i,a));
    }
    for(i=1;i<n;i++)
    {
        cin>>b>>c;
        edge[b].push_back(c);
        edge[c].push_back(b);
    }
    bfs(1);

}