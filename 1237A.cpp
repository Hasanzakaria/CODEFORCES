#include<bits/stdc++.h>
using namespace std;
vector<long long int>v,r;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,x,sum=0,sum1=0;
    cin>>n;
    long long int ara[n];
    for(i=1;i<=n;i++)
    {
        cin>>ara[i-1];
        if(ara[i-1]>=0&&ara[i-1]%2!=0)
        {
            v.push_back(i-1);
        }
        else if(ara[i-1]<0&&ara[i-1]%2!=0)
        {
            r.push_back(i-1);
        }
        if(ara[i-1]>=0)
        {
            sum+=floor(ara[i-1]/2.0);
        }
        if(ara[i-1]<0)
        {
            sum1+=floor(ara[i-1]/2.0);
        }
        mp[i-1]=floor(ara[i-1]/2.0);
    }
    i=0;
    while(i<v.size())
    {
        if(sum==-sum1)
        {
            break;
        }
        sum++;
        mp[v[i]]++;
        i++;
    }
    i=0;
    while(i<r.size())
    {
        if(sum==-sum1)
        {
            break;
        }
        sum1++;
        mp[r[i]]++;
        i++;
    }
    for(i=0;i<n;i++)
    {
        cout<<mp[i]<<"\n";
    }
}