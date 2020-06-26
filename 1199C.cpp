#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
vector<long long int>v;
long long int cum[1000000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,i,l,f,m,maxx=0;
    cin>>n>>k;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(mp[ara[i]]==0)
        {
            mp[ara[i]]++;
            v.push_back(ara[i]);
        }
        else
        {
            mp[ara[i]]++;
        }
    }
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++)
    {
        cum[i+1]=cum[i]+mp[v[i]];
    }
    for(i=0;i<v.size();i++)
    {
        for(l=0; ;l++)
        {
           if(l*n<=(k*8))
           {
               f=pow(2,l);
               m=i+f;
               if(m>=v.size())
               {
                   m=v.size();
                   maxx=max(maxx,cum[m]-cum[i]);
                   break;
               }
               maxx=max(maxx,cum[m]-cum[i]);

           }
           else
           {
               break;
           }
        }
    }
    cout<<n-maxx<<"\n";
}