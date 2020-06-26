#include<bits/stdc++.h>
using namespace std;
struct node
{
    int a,b;
};
vector<node>v[3];
vector<node>::iterator l;
vector<int>p;
vector<int>::iterator u;
bool cmp(node x,node y)
{
    return x.a>y.a;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,k,r,i,x,y,sum=0,q,cou;
    node temp;
    cin>>n>>m;
    k=m/2;
    r=m%2;
    for(i=1; i<=n; i++)
    {
        cin>>x>>y;
        temp.a=y;
        temp.b=i;
        v[x].push_back(temp);
    }
    sort(v[1].begin(),v[1].end(),cmp);
    sort(v[2].begin(),v[2].end(),cmp);
    if(r>0&&v[1].size()>0)
    {
        l=v[1].begin();
        temp=*l;
        p.push_back(temp.b);
        v[1].erase(l);
        sum+=temp.a;
    }
    while(1)
    {
        q=0;
        cou=0;
        if(k==0||(v[1].size()==0&&v[2].size()==0))
        {
            break;
        }
        if(v[1].size()>0)
        {
            l=v[1].begin();
            temp=*l;
            q+=temp.a;
            l++;
            if(l!=v[1].end())
            {
                temp=*l;
                q+=temp.a;
            }
        }
        if(v[2].size()>0)
        {
            l=v[2].begin();
            temp=*l;
            cou+=temp.a;
        }
        if(cou>q)
        {
            sum+=cou;
            p.push_back(temp.b);
            v[2].erase(l);
        }
        else
        {
            sum+=q;
            l=v[1].begin();
            temp=*l;
            p.push_back(temp.b);
            l++;
            if(l!=v[1].end())
            {
                temp=*l;
                p.push_back(temp.b);
                v[1].erase(v[1].begin(),v[1].begin()+2);
            }
            else
            {
               v[1].erase(v[1].begin(),v[1].begin()+1);
            }
        }
        k--;
    }
    cout<<sum<<"\n";
    for(u=p.begin(); u!=p.end(); u++)
    {
        cout<<*u<<" ";
    }
}