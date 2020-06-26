#include<bits/stdc++.h>
using namespace std;
map<string,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s,f,d;
    cin>>s;
    long long int n,i,k,j,flag,cou=0,maxx=-1,kk,r,ans,l;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>f;
        mp[f]=1;
    }
    kk=s.size();
    r=0;
    l=0;
    for(i=0;i<kk;i++)
    {
       flag=-1;
       j=max(l,i-9);
       for(;j<=i;j++)
       {
           for(k=j;k<=i;k++)
           {
               d+=s[k];
           }
           if(mp[d])
           {
               flag=j;
           }
           d.clear();
       }
       if(flag==-1)
       {
           cou++;
           maxx=max(maxx,cou);
           if(maxx==cou)
           {
               ans=r;
           }
       }
       else
       {
           cou=i-flag;
           maxx=max(maxx,cou);
           r=flag+1;
           if(maxx==cou)
           {
               ans=r;
           }
           l=r;
       }
    }
    cout<<maxx<<" "<<ans<<"\n";
}