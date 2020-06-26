#include<bits/stdc++.h>
using namespace std;
int row[]= {0,1},col[]= {1,0},row1[]={-1,0},col1[]={0,-1};
long long int n,m;
vector<char>v[1000000];
vector<pair<long long int,long long int> >vv[3000000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int j,i,tx,ty,u,w,flag=0;
    char t;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>t;
            v[i].push_back(t);
        }
    }
    bool vis[n][m],check[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            vis[i][j]=0;
            check[i][j]=0;
        }
    }
    queue<pair<long long int,long long int> >q;
    pair<long long int,long long int>pq;
    q.push(make_pair(0,0));
    vis[0][0]=1;
    while(!q.empty())
    {
        pq=q.front();
        q.pop();
        tx=pq.first;
        ty=pq.second;
        for(i=0; i<2; i++)
        {
            u=tx+row[i];
            w=ty+col[i];
            if(u>=0&&u<n&&w>=0&&w<m&&vis[u][w]==0&&v[u][w]=='.')
            {
                vis[u][w]=1;
                q.push(make_pair(u,w));
            }
        }
    }
    if(vis[n-1][m-1]==0)
    {
        cout<<0<<"\n";
    }
    else
    {
        vis[0][0]=0;
        q.push(make_pair(n-1,m-1));
        check[n-1][m-1]=1;
        while(!q.empty())
        {
            pq=q.front();
            q.pop();
            tx=pq.first;
            ty=pq.second;
            for(i=0; i<2; i++)
            {
                u=tx+row1[i];
                w=ty+col1[i];
                if(u>=0&&u<n&&w>=0&&w<m&&check[u][w]==0&&v[u][w]=='.')
                {
                    check[u][w]=1;
                    if(vis[u][w]==1)
                    {
                        vv[u+w+1].push_back(make_pair(u,w));
                    }
                    q.push(make_pair(u,w));
                }
            }
        }
        for(i=0; i<3000000; i++)
        {
           if(vv[i].size()>0)
           {
              if(vv[i].size()==1)
              {
                  flag=1;
                  break;
              }
           }
        }
        if(flag==1)
        {
            cout<<1<<"\n";
        }
        else
        {
            cout<<2<<"\n";
        }
    }

}