#include<bits/stdc++.h>
using namespace std;
vector<int>edge[100001],p,r;
vector<int>::iterator l;
bool vis[100001];
int main ()
{
    ios_base::sync_with_stdio(0);
    map<int,int>mp;
    queue<int>q;
    long long int n,i,a,b,t,f,g,cou=0;
    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>a>>b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    q.push(1);
    vis[1]=1;
    while(!q.empty())
    {
        t=q.front();
        q.pop();
        for(l=edge[t].begin();l!=edge[t].end();l++)
        {
            if(mp[t]==0)
            {
                mp[*l]=1;
            }
            else
            {
                mp[*l]=0;
            }
            if(vis[*l]==0)
            {
               q.push(*l);
               vis[*l]=1;
            }

        }
    }
    for(i=1;i<=n;i++)
    {
        if(mp[i]==0)
        {
            p.push_back(i);
        }
        else
        {
            r.push_back(i);
        }
    }
    for(l=p.begin();l!=p.end();l++)
    {
      f=edge[*l].size();
      g=r.size();
      cou+=(g-f);
    }
    cout<<cou<<endl;

}