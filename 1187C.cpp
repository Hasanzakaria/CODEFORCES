#include<bits/stdc++.h>
using namespace std;
long long int ara[2000],b[2000];
struct node
{
    long long int a,b;
};
vector<node>v;
node temp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,x,y,z,j,flag,t=0;
    cin>>n>>m;
    for(i=0;i<n-1;i++)
    {
        b[i]=-1;
    }
    for(i=1;i<=m;i++)
    {
        cin>>x>>y>>z;
        if(x==1)
        {
            for(j=y-1;j<z-1;j++)
            {
                b[j]=0;
            }
        }
        else
        {
           temp.a=y;
           temp.b=z;
           v.push_back(temp);
        }
    }
    ara[0]=1e5;
    for(i=1;i<n;i++)
    {
        ara[i]=ara[i-1]+b[i-1];
    }
    for(i=0;i<v.size();i++)
    {
        flag=0;
        for(j=v[i].a-1;j<v[i].b-1;j++)
        {
            if(ara[j]>ara[j+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            t=1;
            break;
        }
    }
    if(t==0)
    {
        cout<<"YES\n";
        for(i=0;i<n;i++)
        {
            cout<<ara[i]<<" ";
        }
    }
    else
    {
        cout<<"NO\n";
    }

}