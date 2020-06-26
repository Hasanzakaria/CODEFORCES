#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long int s,d,f;
};
vector<node>v;
node temp;
bool check[300000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,m,x,a,b,maxx=-1;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>x;
        if(x==1)
        {
            cin>>a>>b;
            temp.s=1;
            temp.d=a;
            temp.f=b;
            v.push_back(temp);
        }
        else
        {
            cin>>a;
            temp.s=2;
            temp.d=a;
            v.push_back(temp);
        }
    }
    for(i=v.size()-1;i>=0;i--)
    {
        temp=v[i];
        if(temp.s==1)
        {
            if(check[temp.d-1]==0)
            {
                check[temp.d-1]=1;
                ara[temp.d-1]=max(temp.f,maxx);
            }
        }
        else
        {
           maxx=max(maxx,temp.d);
        }
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]<maxx&&check[i]==0)
        {
            ara[i]=maxx;
        }
        cout<<ara[i]<<" ";
    }
}