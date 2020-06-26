#include<bits/stdc++.h>
using namespace std;
vector<long long int>v[100001];
vector<long long int>::iterator l,u;
long long int value[100001],temp[100001],ans,flag;
bool vis[100001];
void bfs(long long int r)
{
    long long int t,p,f,y;
    queue<long long int>q;
    vis[r]=1;
    q.push(r);
    ans+=value[r];
    while(!q.empty())
    {
        t=q.front();
        q.pop();
        for(l=v[t].begin();l!=v[t].end();l++)
        {
            p=*l;
            if(vis[p]==0)
            {
                vis[p]=1;
                q.push(p);
                if(value[p]==-1)
                {
                    f=1000000001;
                    for(u=v[p].begin();u!=v[p].end();u++)
                    {
                       if(vis[*u]==0)
                       {
                          f=min(value[*u],f);
                       }
                    }
                    if(f==1000000001)
                    {
                        temp[p]=-1;
                    }
                    else
                    {
                        temp[p]=f;
                    }
                    if(temp[p]==-1)
                    {
                        value[p]=value[t];
                    }
                    else
                    {
                        value[p]=temp[p];
                        if(value[p]<value[t])
                        {
                            flag=1;
                            return;
                        }
                        else
                        {
                            ans+=value[p]-value[t];
                        }

                    }
                }
                else
                {
                    ans+=(value[p]-value[t]);
                }
            }
        }
    }

}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,m,f;
    cin>>n;
    for(i=1;i<n;i++)
    {
       cin>>a;
       v[i+1].push_back(a);
       v[a].push_back(i+1);
    }
    for(i=1;i<=n;i++)
    {
       cin>>value[i];
    }
    bfs(1);
    if(flag==1)
    {
        cout<<-1<<"\n";
    }
    else
    {
        cout<<ans<<"\n";
    }

}