#include<bits/stdc++.h>
using namespace std;
long long int n,a,b,c,d;
bool vis[51][51];
long long int fx[]={1,-1,0,0};
long long int fy[]={0,0,1,-1};
char jak[51][51];
vector<pair<long long int,long long int> >v,vv;
vector<pair<long long int,long long int> >::iterator l,ll;
void bfs(long long int r,long long int t)
{
    long long int tx,ty,i,k,u;
    pair<long long int,long long int>p;
    queue<pair<long long int,long long int> >q;
    vis[r][t]=1;
    q.push(make_pair(r,t));
    v.push_back(make_pair(r,t));
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        tx=p.first;
        ty=p.second;
        for(i=0;i<4;i++)
        {
            k=tx+fx[i];
            u=ty+fy[i];
            if((k>=1&&k<=n)&&(u>=1&&u<=n)&&vis[k][u]==0&&jak[k][u]=='0')
            {
                vis[k][u]=1;
                q.push(make_pair(k,u));
                v.push_back(make_pair(k,u));
            }
        }


    }

}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i,j,r=100000000,t;
    cin>>n;
    cin>>a>>b;
    cin>>c>>d;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>jak[i][j];
        }
    }
    bfs(a,b);
    if(vis[c][d]==1)
    {
        cout<<0<<"\n";
    }
    else
    {
      vv=v;
      v.clear();
      bfs(c,d);
      pair<long long int,long long int>p,o;
      for(l=vv.begin();l!=vv.end();l++)
      {
          p=*l;
          for(ll=v.begin();ll!=v.end();ll++)
          {
              o=*ll;
              t=((p.first-o.first)*(p.first-o.first))+((p.second-o.second)*(p.second-o.second));
              r=min(r,t);
          }
      }
      cout<<r<<"\n";
    }

}