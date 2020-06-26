#include<bits/stdc++.h>
using namespace std;
char jak[501][501];
bool vis[501][501];
int cou,c=1,n,m;
int tx[]={0,0,1,-1};
int ty[]={1,-1,0,0};
void bfs(int x,int y)
{
    int h,g,i,cx,cy;
    pair<int,int>p;
    queue<pair<int,int> >q;
    vis[x][y]=1;
    q.push(pair<int,int> (x,y));
    if(c==cou)
    {
        return;
    }    
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        g=p.first;
        h=p.second;
        for(i=0;i<4;i++)
        {
            cx=g+tx[i];
            cy=h+ty[i];
            if((cx>=0&&cx<n)&&(cy>=0&&cy<m)&&vis[cx][cy]==0&&jak[cx][cy]!='#')
            {
                vis[cx][cy]=1;
                c++;
                q.push(pair<int,int> (cx,cy));
                if(c==cou)
                {
                    return;
                }
            }
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(0);
    int r,i,j,t,rr;
    cin>>n>>m>>r;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>jak[i][j];
            if(jak[i][j]=='.')
            {
                t=i;
                rr=j;
                cou++;
            }
        }
    }
    cou-=r;
    bfs(t,rr);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(jak[i][j]=='.'&&vis[i][j]==0)
            {
                cout<<'X';
            }
            else
            {
                cout<<jak[i][j];
            }
        }
        cout<<endl;
    }

}