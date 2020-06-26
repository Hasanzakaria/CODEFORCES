#include<bits/stdc++.h>
using namespace std;
map<char,long long int>mp;
char t;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,i,cou=1,l,ans=-1;
    cin>>n>>m;
    string a;
    cin>>a;
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
           l=cou/m;
           mp[a[i]]+=l;
           cou=1;
        }
        else
        {
            cou++;
        }
    }
    l=cou/m;
    mp[a[n-1]]+=l;
    for(i=0;i<26;i++)
    {
      t=97+i;
      ans=max(ans,mp[t]);
    }
    cout<<ans<<"\n";
}