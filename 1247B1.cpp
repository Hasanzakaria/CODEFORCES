#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,c,j,cou,ans,f;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cou=0;
        cin>>a>>b>>c;
        ans=b;
        f=0;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        for(j=0;j<a;j++)
        {
            if(j>=c)
            {
              ans=min(ans,cou);
              mp[ara[f]]--;
              if(mp[ara[f]]==0)
              {
                  cou--;
              }
              f++;
              mp[ara[j]]++;
              if(mp[ara[j]]==1)
              {
                  cou++;
              }
            }
            else
            {
                mp[ara[j]]++;
                if(mp[ara[j]]==1)
                {
                  cou++;
                }
            }
        }
        ans=min(ans,cou);
        mp.clear();
        cout<<ans<<"\n";
    }
}