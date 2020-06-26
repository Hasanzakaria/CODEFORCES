#include<bits/stdc++.h>
using namespace std;
vector<int>v[300001];
vector<int>::iterator l;
bool vis[300001];
int dis[300001];
long long int sum1,sum2,flag;
void bfs(long long int r)
{
    long long int f,u,cou;
    queue<int>q;
    vis[r]=1;
    q.push(r);
    while(!q.empty())
    {
        cou=0;
        f=q.front();
        if(dis[f]%2==0)
        {
            sum1=2*sum1;
            sum1%=998244353;
        }
        else
        {
            sum2=2*sum2;
            sum2%=998244353;
        }
        q.pop();
        for(l=v[f].begin(); l!=v[f].end(); l++)
        {
            u=*l;
            if(vis[u]==0)
            {
                vis[u]=1;
                dis[u]=dis[f]+1;
                q.push(u);
            }
            else
            {
               if((dis[u]%2)==(dis[f]%2))
               {
                   flag=1;
                   return ;
               }
            }
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,b,j,l,m,ans,p;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        ans=1;
        flag=0;
        sum1=1;
        sum2=1;
        cin>>a>>b;
        for(j=1; j<=b; j++)
        {
            cin>>l>>m;
            v[l].push_back(m);
            v[m].push_back(l);
        }
        for(j=1; j<=a; j++)
        {
            if(vis[j]==0)
            {
                bfs(j);
                if(flag)
                {
                    break;
                }
                p=(sum1+sum2)%998244353;
                ans=((ans%998244353)*(p%998244353))%998244353;
                sum1=1;
                sum2=1;
            }
        }
        if(flag)
        {
            cout<<0<<"\n";
        }
        else
        {
            cout<<ans<<"\n";
        }
        for(j=1; j<=a; j++)
        {
            v[j].clear();
            vis[j]=0;
            dis[j]=0;
        }
    }
}