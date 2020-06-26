#include<bits/stdc++.h>
using namespace std;
long long int b[1000001];
set<long long int>s;
set<long long int>::iterator u;
vector<long long int>edge[1000001],v;
bool vis[1000001],f;
void bfs(long long int r)
{
    long long int k,i,t,cou;
    vis[r]=1;
    queue<long long int>q;
    q.push(r);
    while(!q.empty())
    {
        k=q.front();
        q.pop();
        cou=0;
        for(i=0;i<edge[k].size();i++)
        {
            t=edge[k][i];
            if(!vis[t])
            {
                vis[t]=1;
                q.push(t);
            }
            else
            {
               cou++;
            }
        }
        if(cou>1)
        {
            f=1;
            break;
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,x,y,edgee=0,flag=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x>>y;
        b[x]=y;
        v.push_back(y);
    }
    for(i=1;i<=2*n;i++)
    {
        if(b[i]!=0)
        {
            for(u=s.begin();u!=s.end();u++)
            {
                if(*u<b[i])
                {
                    edgee++;
                    if(edgee==n)
                    {
                        flag=1;
                        break;
                    }
                    edge[*u].push_back(b[i]);
                    edge[b[i]].push_back(*u);
                }
                else
                {
                    break;
                }
            }
            s.insert(b[i]);
        }
        else
        {
            s.erase(i);
        }
        if(flag)
        {
            break;
        }
    }
    if(flag)
    {
        cout<<"NO\n";
    }
    else
    {
        bfs(v[0]);
        for(i=0;i<v.size();i++)
        {
            if(!vis[v[i]])
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }

}