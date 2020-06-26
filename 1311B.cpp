#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,j,m,x,y,o,flag;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        flag=0;
        cin>>a>>b;
        pair<long long int,long long int>pq[a];
        for(j=0;j<a;j++)
        {
            cin>>pq[j].first;
            pq[j].second=j+1;
        }
        sort(pq,pq+a);
        for(j=1;j<=b;j++)
        {
           cin>>m;
           mp[m]=1;
        }
        for(j=0;j<a;j++)
        {
            x=j+1;
            y=pq[j].second;
            if(y<x)
            {
                for(o=y;o<x;o++)
                {
                    if(mp[o]==0)
                    {
                       flag=1;
                    }
                }
            }
            else if(y>x)
            {
                for(o=x;o<y;o++)
                {
                   if(mp[o]==0)
                   {
                       flag=1;
                   }
                }
            }
        }
        if(flag)
        {
           cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
        mp.clear();
    }
}