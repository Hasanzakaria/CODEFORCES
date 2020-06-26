#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp,cp;
vector<long long int>v,ans;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,k,flag;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        flag=0;
        cin>>a;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            mp[ara[j]]=1;
        }
        for(j=1;j<=a;j++)
        {
            if(mp[j]==0)
            {
                v.push_back(j);
            }
        }
        k=0;
        for(j=0;j<a;j++)
        {
          if(cp[ara[j]]==0)
          {
            ans.push_back(ara[j]);
            cp[ara[j]]=1;
          }
          else
          {
              if(v[k]<=ara[j])
              {
                  ans.push_back(v[k]);
                  k++;
              }
              else
              {
                 flag=1;
              }
          }
        }
        if(flag==1)
        {
            cout<<-1;
        }
        else
        {
            for(j=0;j<a;j++)
            {
                cout<<ans[j]<<" ";
            }
        }
        cout<<"\n";
        v.clear();
        ans.clear();
        mp.clear();
        cp.clear();


    }


}