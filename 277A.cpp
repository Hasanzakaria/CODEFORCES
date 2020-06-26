#include<iostream>
#include<queue>
using namespace std;
vector<int>edge[201];
vector<int>::iterator k;
bool vis[201];
void bfs(int x)
{
    int p,t;
    vis[x]=1;
    queue<int>a;
    a.push(x);
    while(!a.empty())
    {
        t=a.front();
        a.pop();
        for(k=edge[t].begin(); k!=edge[t].end(); k++)
        {
            p=*k;
            if(!vis[p])
            {
                vis[p]=1;
                a.push(p);
            }
        }
    }

}
int main ()
{
    int a,b,i,c,j,d,cou=0,flag=0;
    cin>>a>>b;
    for(i=1; i<=a; i++)
    {
        cin>>c;
        for(j=1; j<=c; j++)
        {
            cin>>d;
            flag=1;
            edge[i].push_back(d+100);
            edge[d+100].push_back(i);
        }

    }
    for(i=1; i<=a; i++)
    {
        if(!vis[i])
        {
            bfs(i);
            cou++;
        }
    }
    if(flag==0)
    {
        cout<<a;
    }
    else
    {
        cout<<cou-1;
    }
}