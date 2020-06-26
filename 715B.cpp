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
vector<int>edge[1000];
vector<int>::iterator k;
map<int,long long int>mp[1000];
long long int dis[1000];
int parent[1000];
priority_queue<point>pq;
void dijkstra(int r)
{
    for(k=edge[r].begin(); k!=edge[r].end(); k++)
    {
        if(dis[r]+mp[r][*k]<dis[*k])
        {
            dis[*k]=dis[r]+mp[r][*k];
            point y;
            y.name=*k;
            y.value=dis[*k];
            pq.push(y);
            parent[*k]=r;

        }
    }
}
int main()
{
    long long int a,b,c,d,e,i,z,o,cou=0,l,f,flag=0;
    cin>>a>>b>>c>>d>>e;
    pair<int,int>ara[b];
    for(i=0; i<b; i++)
    {
        cin>>ara[i].first>>ara[i].second>>z;
        edge[ara[i].first].push_back(ara[i].second);
        edge[ara[i].second].push_back(ara[i].first);
        mp[ara[i].first][ara[i].second]=z;
        mp[ara[i].second][ara[i].first]=z;
    }
    for(i=0; i<1000; i++)
    {
        dis[i]=1e12;
    }
    dis[d]=0;
    point get;
    get.name=d;
    get.value=0;
    parent[d]=-1;
    pq.push(get);
    while(!pq.empty())
    {
        point temp;
        temp=pq.top();
        pq.pop();
        if(temp.name==e)
        {
            break;
        }
        dijkstra(temp.name);
    }
    if(dis[e]>c)
    {
        flag=1;
    }
    else
    {
        l=e;
        while(1)
        {
            o=parent[l];
            if(o==-1)
            {
                break;
            }
            if(mp[o][l]==0)
            {
                cou++;
            }
            l=o;

        }
        l=e;
        f=c-dis[e];
        while(1)
        {
            o=parent[l];
            if(o==-1)
            {
                break;
            }
            if(cou>0)
            {
                if(mp[o][l]==0&&cou==1)
                {
                    mp[o][l]=f;
                    mp[l][o]=f;
                    cou--;
                }
                else if(mp[o][l]==0)
                {
                    mp[o][l]=1;
                    mp[l][o]=1;
                    f--;
                    cou--;

                }
            }
            else
            {
                break;
            }
            l=o;
        }
    }
    if(flag==0)
    {
        for(i=0; i<b; i++)
        {
            if(mp[ara[i].first][ara[i].second]==0)
            {
                mp[ara[i].first][ara[i].second]=100000000000;
                mp[ara[i].second][ara[i].first]=100000000000;
            }

        }
    }
    for(i=0; i<1000; i++)
    {
        dis[i]=1e12;
    }
    dis[d]=0;
    while(!pq.empty())
    {
        pq.pop();
    }
    pq.push(get);
    while(!pq.empty())
    {
        point temp;
        temp=pq.top();
        pq.pop();
        if(temp.name==e)
        {
            break;
        }
        dijkstra(temp.name);
    }
    if(dis[e]!=c)
    {
        flag=1;
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(i=0; i<b; i++)
        {
            cout<<ara[i].first<<" "<<ara[i].second<<" "<<mp[ara[i].first][ara[i].second]<<endl;
        }
    }


}