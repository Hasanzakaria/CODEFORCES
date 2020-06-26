#include<bits/stdc++.h>
using namespace std;
bool mp[1000001];
bool lp[1000001];
int main()
{
    ios_base::sync_with_stdio(0);
    int a,b,c,i,d,flag=0,x,y,k;
    cin>>a>>b>>c;
    for(i=1;i<=b;i++)
    {
        cin>>d;
        mp[d]=1;
    }
    lp[1]=1;
    if(mp[1]==1)
    {
        flag=1;
        k=1;
    }
    for(i=1;i<=c;i++)
    {
        cin>>x>>y;
        if(lp[x]==1&&flag==0)
        {
            if(mp[y]==1)
            {
                k=y;
                flag=1;
                continue;
            }
            lp[x]=0;
            lp[y]=1;
            k=y;
        }
        else if(lp[y]==1&&flag==0)
        {
            if(mp[x]==1)
            {
                k=x;
                flag=1;
                continue;
            }
            lp[y]=0;
            lp[x]=1;
            k=x;
        }
    }
    cout<<k<<endl;



}