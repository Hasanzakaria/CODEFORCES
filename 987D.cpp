#include<bits/stdc++.h>
using namespace std;
vector<int>edge[100001];
vector<int>::iterator u;
queue<int>q;
bool vis[100001];
int mp[101][100001];
void bfs(int r)
{
   int e,t;
   while(!q.empty())
   {
     e=q.front();
     q.pop();
     for(u=edge[e].begin();u!=edge[e].end();u++)
     {
       t=*u;
       if(!vis[t])
       {
           vis[t]=1;
           mp[r][t]=mp[r][e]+1;
           q.push(t);
       }
     }
   }
}
int main ()
{
   ios_base::sync_with_stdio(0);
   int a,b,c,d,i,x,y,j,f,r;
   multiset<int>s;
   multiset<int>::iterator ss;
   cin>>a>>b>>c>>d;
   int ara[a];
   for(i=1;i<=a;i++)
   {
       cin>>ara[i-1];
   }
   for(i=1;i<=b;i++)
   {
       cin>>x>>y;
       edge[x].push_back(y);
       edge[y].push_back(x);
   }
   for(i=1;i<=c;i++)
   {
       for(j=0;j<a;j++)
       {
           if(ara[j]==i)
           {
               q.push(j+1);
               vis[j+1]=1;
           }
       }
       bfs(i);
       memset(vis,0,sizeof(vis));
   }
   for(i=1;i<=a;i++)
   {
       f=0;
       r=0;
       for(j=1;j<=c;j++)
       {
          s.insert(mp[j][i]);
       }
       for(ss=s.begin();ss!=s.end();ss++)
       {
          if(r==d)
          {
             break;
          }
          f+=(*ss);
          r++;
       }
       cout<<f<<" ";
       s.clear();

   }
}