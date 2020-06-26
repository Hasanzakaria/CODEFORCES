#include<bits/stdc++.h>
using namespace std;
long long int ara[200000];
map<long long int,long long int>mp;
vector<long long int>v;
void rec(long long int val,long long int id)
{
    if(ara[id]==val)
    {
        return;
    }
    v.push_back(ara[id]);
    rec(val,ara[id]-1);
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,d,k,u;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        for(j=0;j<a;j++)
        {
            if(mp[ara[j]]==0)
            {
                v.push_back(ara[j]);
                rec(ara[j],ara[j]-1);
                u=v.size();
                for(k=0;k<v.size();k++)
                {
                    mp[v[k]]=u;
                }
                v.clear();
            }
        }
        for(j=0;j<a;j++)
        {
            cout<<mp[ara[j]]<<" ";
        }
        mp.clear();
        cout<<"\n";
    }
}