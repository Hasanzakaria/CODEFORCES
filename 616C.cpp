#include<iostream>
#include<queue>
#include<utility>
#include<stdio.h>
using namespace std;
int cell[1000][1000];
int vis[1000][1000];
int elaka[1000001];
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
int a,b,cou,p=1;
void bfs(int x,int y)
{
    int t,e,i,tx,ty;
    vis[x][y]=p;
    queue<pair<int,int> >aa;
    aa.push(pair<int,int>(x,y));
    cou++;
    while(!aa.empty())
    {
       pair<int,int>r;
       r=aa.front();
       t=r.first;
       e=r.second;
       aa.pop();
       for(i=0;i<4;i++)
       {
          tx=t+fx[i];
          ty=e+fy[i];
          if((tx>=0&&tx<a)&&(ty>=0&&ty<b)&&vis[tx][ty]==0&&cell[tx][ty]!=-1)
          {
             vis[tx][ty]=p;
             cou++;
             aa.push(pair<int,int>(tx,ty));
          }
       }
    }


}
int main ()
{
    int i,j,r,g,h,w,ww,www;
    scanf("%d %d",&a,&b);
    char jak[a][b+1];
    for(i=0;i<a;i++)
    {
       scanf("%s",&jak[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(jak[i][j]=='*')
            {
                cell[i][j]=-1;
            }
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(jak[i][j]=='.'&&vis[i][j]==0)
            {
                bfs(i,j);
                elaka[p++]=cou;
                cou=0;

            }
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(jak[i][j]=='*')
            {
                g=0;
                w=0;
                ww=0;
                www=0;
                if(cell[i][j+1]!=-1&&(i>=0&&i<a)&&((j+1)>=0&&(j+1)<b))
                {
                   g=elaka[vis[i][j+1]];
                   w=vis[i][j+1];

                }
                if(cell[i][j-1]!=-1&&vis[i][j-1]!=w&&(i>=0&&i<a)&&((j-1)>=0&&(j-1)<b))
                {
                    g=g+elaka[vis[i][j-1]];
                    ww=vis[i][j-1];
                }
                if(cell[i+1][j]!=-1&&vis[i+1][j]!=w&&vis[i+1][j]!=ww&&((i+1)>=0&&(i+1)<a)&&(j>=0&&j<b))
                {
                    g=g+elaka[vis[i+1][j]];
                    www=vis[i+1][j];
                }
                if(cell[i-1][j]!=-1&&vis[i-1][j]!=w&&vis[i-1][j]!=ww&&vis[i-1][j]!=www&&((i-1)>=0&&(i-1)<a)&&(j>=0&&j<b))
                {
                    g=g+elaka[vis[i-1][j]];
                }
                g++;
                h=g%10;
                jak[i][j]=h+48;

            }
        }
        jak[i][j]='\0';
    }
    for(i=0;i<a;i++)
    {
        printf("%s\n",jak[i]);
    }
}