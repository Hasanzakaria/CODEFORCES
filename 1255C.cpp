#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long int x,y,z;
};
vector<node>v[100001];
node temp;
vector<long long int>finall;
map<long long int,long long int>cp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,b,c,ans,t,u,xx,j;
    cin>>n;
    for(i=1;i<=n-2;i++)
    {
        cin>>a>>b>>c;
        temp.x=a;
        temp.y=b;
        temp.z=c;
        v[a].push_back(temp);
        v[b].push_back(temp);
        v[c].push_back(temp);
    }
    for(i=1;i<=n;i++)
    {
        if(v[i].size()==1)
        {
            ans=i;
            break;
        }
    }
    finall.push_back(ans);
    for(i=0;i<v[ans].size();i++)
    {
        temp=v[ans][i];
        if(v[temp.x].size()==2)
        {
            finall.push_back(temp.x);
        }
        if(v[temp.x].size()==3)
        {
           u=temp.x;
        }
        if(v[temp.y].size()==2)
        {
            finall.push_back(temp.y);
        }
        if(v[temp.y].size()==3)
        {
           u=temp.y;
        }
        if(v[temp.z].size()==2)
        {
            finall.push_back(temp.z);
        }
        if(v[temp.z].size()==3)
        {
           u=temp.z;
        }
    }
    finall.push_back(u);
    cp[finall[0]]=1;
    cp[finall[1]]=1;
    cp[finall[2]]=1;
    for(i=1;i<=n-2;i++)
    {
        xx=finall[i];
        for(j=0;j<v[xx].size();j++)
        {
           temp=v[xx][j];
           if(cp[temp.x]==0)
           {
               finall.push_back(temp.x);
               cp[temp.x]=1;
           }
           else if(cp[temp.y]==0)
           {
               finall.push_back(temp.y);
               cp[temp.y]=1;
           }
           else if(cp[temp.z]==0)
           {
              finall.push_back(temp.z);
              cp[temp.z]=1;
           }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<finall[i]<<" ";
    }
}