#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,k,e,gold,silver,bronze,sum;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        gold=0;
        silver=0;
        bronze=0;
        sum=0;
        cin>>a;
        e=-1;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        k=a/2;
        for(j=k-1;j>=0;j--)
        {
            if(ara[j]!=ara[k])
            {
                e=j;
                break;
            }
        }
        for(j=0;j<=e;j++)
        {
            mp[ara[j]]++;
            if(mp[ara[j]]==1)
            {
                v.push_back(ara[j]);
            }
        }
        for(j=0;j<v.size();j++)
        {
            sum+=mp[v[j]];
        }
        if(v.size()>0)
        {
           gold=mp[v[0]];
        }
        for(j=1;j<v.size();j++)
        {
            silver+=mp[v[j]];
            if(silver>gold)
            {
                break;
            }
        }
        bronze=sum-gold-silver;
        if(gold<silver&&gold<bronze)
        {
            cout<<gold<<" "<<silver<<" "<<bronze<<"\n";
        }
        else
        {
            cout<<0<<" "<<0<<" "<<0<<"\n";
        }
        v.clear();
        mp.clear();
    }

}