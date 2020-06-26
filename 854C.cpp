#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main ()
{
    long long int a,b,i,k,cou=0,l,t=0;
    cin>>a>>b;
    k=b+1;
    pair<int,int>ara[a],val[a];
    for(i=0;i<a;i++)
    {
        cin>>ara[i].first;
        ara[i].second=i+1;
    }
    sort(ara,ara+a);
    reverse(ara,ara+a);
    for(i=0;i<a;i++)
    {
        if(ara[i].second>b&&mp[ara[i].second]==0)
        {
            mp[ara[i].second]=1;
            val[t].first=ara[i].second;
            val[t].second=ara[i].second;
            t++;
        }
        else
        {
            while(mp[k]==1)
            {
                k++;
            }
            cou+=(k-ara[i].second)*(ara[i].first);
            mp[k]=1;
            val[t].first=ara[i].second;
            val[t].second=k;
            t++;
            k++;
        }
    }
    sort(val,val+a);
    cout<<cou<<endl;
    for(i=0;i<a;i++)
    {
        cout<<val[i].second<<" ";
    }

}