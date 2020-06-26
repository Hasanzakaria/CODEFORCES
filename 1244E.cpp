#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>cp,mp;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,j,flag=0,d,ans=0;
    cin>>n>>m;
    long long int ara[n];
    for(i=0; i<n; i++)
    {
        cin>>ara[i];
        if(cp[ara[i]]==0)
        {
            cp[ara[i]]=1;
            v.push_back(ara[i]);
        }
        mp[ara[i]]++;
    }
    sort(v.begin(),v.end());
    i=0;
    j=v.size()-1;
    while(i+1<=j-1)
    {
        if(((v[i+1]-v[i])*mp[v[i]])+((v[j]-v[j-1])*mp[v[j]])<=m)
        {
            m-=((v[i+1]-v[i])*mp[v[i]])+((v[j]-v[j-1])*mp[v[j]]);
            mp[v[i+1]]+=mp[v[i]];
            mp[v[j-1]]+=mp[v[j]];
            i++;
            j--;
        }
        else
        {
            break;
        }
    }
    while(i!=j)
    {
        if((v[i+1]-v[i])*mp[v[i]]<=(v[j]-v[j-1])*mp[v[j]]&&(v[i+1]-v[i])*mp[v[i]]<=m)
        {
            m-=(v[i+1]-v[i])*mp[v[i]];
            mp[v[i+1]]+=mp[v[i]];
            i++;
        }
        else if((v[j]-v[j-1])*mp[v[j]]<(v[i+1]-v[i])*mp[v[i]]&&(v[j]-v[j-1])*mp[v[j]]<=m)
        {
            m-=(v[j]-v[j-1])*mp[v[j]];
            mp[v[j-1]]+=mp[v[j]];
            j--;
        }
        else
        {
            if(mp[v[i]]<mp[v[j]])
            {
                v[i]+=m/mp[v[i]];
            }
            else
            {
                v[j]-=m/mp[v[j]];
            }
            break;
        }
    }
    cout<<v[j]-v[i]<<endl;

}