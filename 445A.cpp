#include<iostream>
#include<queue>
#include<utility>
using namespace std;
int n,m;
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
char tak[100][100];
int cell[100][100];
bool vis[100][100];
void bfs(int x,int y)
{
    int t,o,i,tx,ty;
    vis[x][y]=1;
    queue<pair<int,int> >a;
    a.push(pair<int,int>(x,y));
    tak[x][y]='B';
    while(!a.empty())
    {
        pair<int,int>r;
        r=a.front();
        t=r.first;
        o=r.second;
        a.pop();
        for(i=0;i<4;i++)
        {
            tx=t+fx[i];
            ty=o+fy[i];
            if((tx>=0&&tx<n)&&(ty>=0&&ty<m)&&cell[tx][ty]!=-1&&vis[tx][ty]==0)
            {
                vis[tx][ty]=1;
                if(tak[t][o]=='B')
                {
                    tak[tx][ty]='W';
                }
                else
                {
                    tak[tx][ty]='B';
                }
                a.push(pair<int,int>(tx,ty));
            }
        }

    }

}
int main ()
{
   int i,j;
   cin>>n>>m;
   char ara[n][m];
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           cin>>ara[i][j];
           if(ara[i][j]=='-')
           {
               cell[i][j]=-1;
               tak[i][j]='-';
           }
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           if(ara[i][j]=='.'&&vis[i][j]==0)
           {
               bfs(i,j);
           }
       }
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           cout<<tak[i][j];
       }
       cout<<endl;
   }

}