#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    map<int,int>mp;
    map<int,int>tp;
    int n,m,i,cou=0;
    cin>>n>>m;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mp[ara[i]]++;
    }
    sort(ara,ara+n);
    for(i=0;i<n-1;i++)
    {
        if(ara[i]<ara[i+1]&&(ara[i]+m)>=ara[i+1])
        {
            mp[ara[i]]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        if(tp[ara[i]]==0)
        {
           cou+=mp[ara[i]];
           tp[ara[i]]=1;
        }
    }
    cout<<cou<<endl;
}