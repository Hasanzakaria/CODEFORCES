#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long int x,y;
};
node temp;
vector<node>v,t;
vector<long long int>c,d;
bool cmp(node u,node r)
{
    return u.y>r.y;
}
bool cmp1(node u,node r)
{
    return u.y<r.y;
}
map<long long int,long long int>mp[700000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int tt,i,a,b,f;
    cin>>tt;
    for(i=1;i<=tt;i++)
    {
        cin>>a>>b;
        mp[a][b]=i;
        temp.x=a;
        temp.y=b;
        if(a<b)
        {
            v.push_back(temp);
        }
        else
        {
            t.push_back(temp);
        }
    }
    sort(v.begin(),v.end(),cmp);
    sort(t.begin(),t.end(),cmp1);
    for(i=0;i<v.size();i++)
    {
        if(i==0)
        {
            c.push_back(mp[v[i].x][v[i].y]);
            f=v[i].y;
        }
        else
        {
            if(v[i].x<f)
            {
                c.push_back(mp[v[i].x][v[i].y]);
                f=v[i].y;
            }
        }
    }
    for(i=0;i<t.size();i++)
    {
        if(i==0)
        {
           d.push_back(mp[t[i].x][t[i].y]);
           f=t[i].y;
        }
        else
        {
            if(t[i].x>f)
            {
                d.push_back(mp[t[i].x][t[i].y]);
                f=t[i].y;
            }
        }
    }
    if(c.size()>d.size())
    {
        cout<<c.size()<<"\n";
        for(i=0;i<c.size();i++)
        {
            cout<<c[i]<<" ";
        }
    }
    else
    {
        cout<<d.size()<<"\n";
        for(i=0;i<d.size();i++)
        {
            cout<<d[i]<<" ";
        }
    }

}