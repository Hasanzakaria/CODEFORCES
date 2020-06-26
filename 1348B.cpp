#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
vector<long long int>v;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,a,b,j,cou,k,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        cou=0;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            mp[ara[j]]++;
            if(mp[ara[j]]==1)
            {
              cou++;
              v.push_back(ara[j]);
            }
        }
        if(cou>b)
        {
            cout<<-1<<"\n";
        }
        else
        {
            for(j=1;j<=b-cou;j++)
            {
                v.push_back(ara[0]);
            }
            cout<<v.size()*a<<"\n";
            for(j=1;j<=a;j++)
            {
              for(k=0;k<v.size();k++)
              {
                  cout<<v[k]<<" ";
              }
            }
            cout<<"\n";
        }
        v.clear();
        mp.clear();
    }
}