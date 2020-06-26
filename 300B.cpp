#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long int x,y,z;
};
vector<long long int>v[50];
vector<long long int>l,p;
vector<long long int>::iterator o;
bool vis[50];
vector<node>tp;
vector<node>::iterator mm;
node temp;
void dfs(long long int r)
{
    vector<long long int>::iterator u;
    if(vis[r])
    {
        return;
    }
    p.push_back(r);
    vis[r]=1;
    for(u=v[r].begin();u!=v[r].end();u++)
    {
        dfs(*u);
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,a,b,flag=0;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(i=1;i<=n;i++)
    {
        if(v[i].size()==0)
        {
            l.push_back(i);
            vis[i]=1;
        }
    }
    o=l.begin();
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
            if(p.size()==3)
            {
                temp.x=p[0];
                temp.y=p[1];
                temp.z=p[2];
                tp.push_back(temp);
            }
            else if(p.size()==2&&o!=l.end())
            {
                temp.x=p[0];
                temp.y=p[1];
                temp.z=*o;
                o++;
                tp.push_back(temp);
            }
            else
            {
               flag=1;
            }
            p.clear();
        }
    }
    if(flag==1)
    {
        cout<<-1<<"\n";
    }
    else
    {
       long long int e=0;
       for(mm=tp.begin();mm!=tp.end();mm++)
       {
           temp=*mm;
           cout<<temp.x<<" "<<temp.y<<" "<<temp.z<<"\n";
       }
       for( ;o!=l.end();o++)
       {
           e++;
           cout<<*o<<" ";
           if(e==3)
           {
               cout<<"\n";
               e=0;
           }
       }
    }
}