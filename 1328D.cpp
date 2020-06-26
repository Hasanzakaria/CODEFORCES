#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[200001];
long long int type[200001];
bool vis[200001];
long long int ans[200001];
void bfs(long long int r)
{
    long long int f,i,x,t,u,flag=0;
    queue<long long int>q;
    vis[r]=1;
    q.push(r);
    ans[r]=1;
    while(!q.empty())
    {
        f=q.front();
        q.pop();
        for(i=0; i<v[f].size(); i++)
        {
            x=v[f][i];
            if(vis[x]==0)
            {
                if(type[f]==type[x])
                {
                    ans[x]=ans[f];
                }
                else
                {
                    if(ans[f]==1)
                    {
                        ans[x]=2;
                    }
                    else
                    {
                        ans[x]=1;
                    }
                }
                q.push(x);
                vis[x]=1;
            }
            else
            {
                if(type[f]!=type[x]&&ans[f]==ans[x])
                {
                    for(t=0; t<v[x].size(); t++)
                    {
                        u=v[x][t];
                        if(type[x]==type[u])
                        {
                            if(ans[x]==1)
                            {
                                ans[x]=2;
                            }
                            else
                            {
                                ans[x]=1;
                            }
                            flag=1;
                        }
                    }
                    if(flag==0)
                    {
                        ans[x]=3;
                    }
                }
            }
        }

    }
}
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,x,y,cou,e;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cou=0;
        e=0;
        cin>>a;
        long long int ara[a];
        for(j=0; j<a; j++)
        {
            cin>>ara[j];
            type[j]=ara[j];
        }
        for(j=0; j<a-1; j++)
        {
            if(e==0&&ara[j]==ara[j+1])
            {
                e=j;
            }
            v[j].push_back(j+1);
        }
        if(e==0&&ara[a-1]==ara[0])
        {
            e=a-1;
        }
        v[a-1].push_back(0);
        bfs(e);
        for(j=0; j<a; j++)
        {
            if(mp[ans[j]]==0)
            {
                mp[ans[j]]++;
                cou++;
            }
        }
        cout<<cou<<"\n";
        mp.clear();
        for(j=0; j<a; j++)
        {
            cout<<ans[j]<<" ";
        }
        cout<<"\n";
        for(j=0; j<a; j++)
        {
            v[j].clear();
            vis[j]=0;
            type[j]=0;
            ans[j]=0;
        }
    }


}