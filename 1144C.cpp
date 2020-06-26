#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp,cp,rp;
vector<long long int>v,u;
vector<long long int>::iterator l;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,t,flag=0;
    cin>>n;
    long long int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
        t=ara[i];
        if(mp[t]==0)
        {
            v.push_back(t);
            mp[t]=1;
            cp[i]=1;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        t=ara[i];
        if(cp[i]==1)
        {
            continue;
        }
        if(rp[t]==1)
        {
            flag=1;
            break;
        }
        u.push_back(t);
        rp[t]=1;

    }
    if(flag==0)
    {
        cout<<"YES\n";
        cout<<v.size()<<"\n";
        for(l=v.begin(); l!=v.end(); l++)
        {
            cout<<*l<<" ";
        }
        cout<<"\n";
        cout<<u.size()<<"\n";
        for(l=u.begin(); l!=u.end(); l++)
        {
            cout<<*l<<" ";
        }
        cout<<"\n";

    }
    else
    {
        cout<<"NO\n";
    }

}