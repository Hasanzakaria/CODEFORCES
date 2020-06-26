#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long int c,a,b;
};
vector<node>v;
node temp,temp1;
bool cmp(node &x,node &y)
{
    return x.c>y.c;
}
vector<long long int>con[1000000];
long long int level[1000000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,x,cur,u,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x;
        temp.c=x;
        temp.a=(2*i)-1;
        temp.b=2*i;
        v.push_back(temp);
    }
    sort(v.begin(),v.end(),cmp);
    for(i=0;i<v.size()-1;i++)
    {
        temp=v[i];
        temp1=v[i+1];
        con[temp.a].push_back(temp1.a);
    }
    for(i=0;i<v.size();i++)
    {
        temp=v[i];
        level[i+1]=temp.a;
    }
    for(i=0;i<v.size();i++)
    {
        temp=v[i];
        cur=i+1+temp.c-1;
        u=level[cur];
        con[u].push_back(temp.b);
        if(level[cur+1]==0)
        {
             level[cur+1]=temp.b;
        }

    }
    for(i=1;i<=2*t;i++)
    {
       for(j=0;j<con[i].size();j++)
       {
          cout<<i<<" "<<con[i][j]<<"\n";
       }
    }
}