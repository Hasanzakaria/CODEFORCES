#include<iostream>
#include<stdio.h>
using namespace std;
bool vis[50][50];
char ara[50][50];
int i,j,cou,flag,l,a,b;
void dfs(int x,int y,char ch)
{
    if(x<0||x>=a||y<0||y>=b)
    {
        return;
    }
    if(ch!=ara[i][j])
    {
        return;
    }
    if(vis[x][y])
    {
        l++;
        if(cou>=4&&l>=2)
        {
          flag=1;
        }
        return ;
    }
    l=0;
    vis[x][y]=1;
    cou++;
    dfs(x,y+1,ara[x][y+1]);
    dfs(x,y-1,ara[x][y-1]);
    dfs(x-1,y,ara[x-1][y]);
    dfs(x+1,y,ara[x+1][y]);
    l=0;

}
int main ()
{
    cin>>a>>b;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin>>ara[i][j];
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(vis[i][j]==0)
            {
                dfs(i,j,ara[i][j]);
                cou=0;
            }
        }
    }
    if(flag==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }

}