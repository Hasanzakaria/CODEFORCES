#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,flag=0,p;
    cin>>n;
    long long int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(i=0; i<n; i+=2)
    {
        v.push_back(ara[i]);
    }
    if(n%2==0)
    {
        for(i=n-1; i>=0; i-=2)
        {
            v.push_back(ara[i]);
        }
    }
    else
    {
        for(i=n-2; i>=0; i-=2)
        {
            v.push_back(ara[i]);
        }
    }
    p=v.size()-1;
    for(i=0; i<v.size(); i++)
    {
        if(i==0)
        {
            if(v[i]>=v[i+1]+v[p])
            {
                flag=1;
            }
            continue;
        }
        if(i==v.size()-1)
        {
            if(v[i]>=v[i-1]+v[0])
            {
                flag=1;
            }
            continue;
        }
        if(v[i]>=(v[i+1]+v[i-1]))
        {
            flag=1;
        }
    }
    if(flag)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
    }
}