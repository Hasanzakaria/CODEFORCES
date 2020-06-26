#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,x,y,j,u,cou;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x>>y;
        cou=0;
        u=x;
        long long int ara[x];
        for(j=0;j<x;j++)
        {
            cin>>ara[j];
        }
        for(j=0;j<x;j++)
        {
            if(y==1)
            {
               u=j;
               break;
            }
            if(ara[j]%2==1)
            {
              v.push_back(j+1);
              y--;
            }
        }
        for(j=u;j<x;j++)
        {
            if(y>0)
            {
                y--;
            }
            if(ara[j]%2==1)
            {
                cou++;
            }
        }
        if(cou%2==1)
        {
            if(y==0)
            {
                cout<<"YES\n";
                for(j=0;j<v.size();j++)
                {
                    cout<<v[j]<<" ";
                }
                cout<<x<<"\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            cout<<"NO\n";
        }
        v.clear();
    }


}