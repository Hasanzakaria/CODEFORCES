#include<bits/stdc++.h>
using namespace std;
struct point
{
    long long int name,value;
    bool operator<(const point &a)const
    {
        return a.value<value;
    }
};
priority_queue<point>pq;
vector<long long int>edge[100001],minn[100001];
vector<long long int>::iterator l;
map<long long int,long long int>cost[100001],mp[100001];
long long int dis[100001];
void dijkstra(long long int r,long long int q)
{
    int i,k;
    for(i=0;i<edge[r].size();i++)
    {
        k=edge[r][i];
        if(q+cost[r][k]<dis[k])
        {
            dis[k]=q+cost[r][k];
            point rr;
            rr.name=k;
            rr.value=dis[k];
            pq.push(rr);
        }
    }
}
int main ()
{
    //ios_base::sync_with_stdio(0);
    long long int n,m,i,a,b,c,d,j,r,e,k,t,z,s,q;
    scanf("%I64d %I64d",&n,&m);
    for(i=1; i<=m; i++)
    {
        scanf("%I64d %I64d %I64d",&a,&b,&c);
        edge[a].push_back(b);
        edge[b].push_back(a);
        cost[a][b]=c;
        cost[b][a]=c;
    }
    for(i=1; i<=n; i++)
    {
        scanf("%I64d",&d);
        for(j=1; j<=d; j++)
        {
            scanf("%I64d",&r);
            minn[i].push_back(r);
        }
        //if(minn[i].size()==0)
        //{
          //  continue;
        //}
        for(int j = minn[i].size()-1; j>=0; j--)
        {
            int num = minn[i][j];
            if(mp[i][num+1]==0)mp[i][num] = num+1;
            else mp[i][num] = mp[i][num+1];
        }
    }
    dis[1]=0;
    for(i=2; i<=n; i++)
    {
        dis[i]=1e17;
    }
    point get;
    get.name=1;
    get.value=0;
    pq.push(get);
    while(!pq.empty())
    {
        point temp;
        temp=pq.top();
        e=temp.name;
        k=temp.value;
        pq.pop();
        if(mp[e][k]!=0)
        {
          q=mp[e][k];
        }
        else
        {
            q=temp.value;
        }
        dijkstra(temp.name,q);
    }
    if(dis[n]==1e17)
    {
        printf("-1\n");
    }
    else
    {
        printf("%I64d\n",dis[n]);
    }

}