#include<bits/stdc++.h>
using namespace std;
int n,m;
int tak[1001][1001];
bool vis[1001][1001];
int fx[]={0,0,1,-1};
int fy[]={1,-1,0,0};
pair<int,int>parent[1001][1001];
void bfs(int r,int e)
{
    int x,y,i,tx,ty;
    vis[r][e]=1;
    queue<pair<int,int> >a;
    a.push(pair<int,int>(r,e));
    while(!a.empty())
    {
        pair<int,int>p1;
        p1=a.front();
        a.pop();
        x=p1.first;
        y=p1.second;
        for(i=0;i<4;i++)
        {
           tx=x+fx[i];
           ty=y+fy[i];
           if(tak[tx][ty]!=-1&&(tx>=1&&tx<=n)&&(ty>=1&&ty<=m)&&vis[tx][ty]==0)
           {
               vis[tx][ty]=1;
               a.push(pair<int,int>(tx,ty));
               parent[tx][ty].first=x;
               parent[tx][ty].second=y;

           }
        }


    }
}
int main ()
{
    int i,j,q,e,qq,ee,k,l,flag=0,fool=0,cou=0,h,g;
    cin>>n>>m;
    char jak[n+1][m+1];
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=m;j++)
       {
           cin>>jak[i][j];
           if(jak[i][j]=='*')
           {
               tak[i][j]=-1;
           }
           if(jak[i][j]=='S')
           {
               q=i;
               e=j;
           }
           if(jak[i][j]=='T')
           {
              qq=i;
              ee=j;
           }
       }
    }
    bfs(q,e);
    h=qq;
    g=ee;
    while(1)
    {
       k=parent[qq][ee].first;
       l=parent[qq][ee].second;
       if(k==0&&l==0)
       {
           break;
       }
       if(k!=qq)
       {
          flag=1;
       }
       if(l!=ee)
       {
           fool=1;
       }
       if(flag==1&&fool==1)
       {
          cou++;
          flag=0;
          fool=0;
          continue;
       }
       qq=k;
       ee=l;
    }
    if(vis[h][g]==0)
    {
        cout<<"NO";
    }
    else
    {
        if(cou>2)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
    }
}