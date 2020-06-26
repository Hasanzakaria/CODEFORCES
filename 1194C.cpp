#include<bits/stdc++.h>
using namespace std;
vector<char>v;
map<char,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string a,b,c;
    long long int n,i,k,l,j,u,r,flag;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        flag=0;
        cin>>a>>b>>c;
        k=a.size();
        l=b.size();
        u=0;
        for(j=0;j<l;j++)
        {
            if(b[j]==a[u])
            {
                u++;
            }
            else
            {
               v.push_back(b[j]);
            }
        }
        if(u==k)
        {
          r=c.size();
          for(j=0;j<r;j++)
          {
            mp[c[j]]++;
          }
          for(j=0;j<v.size();j++)
          {
              mp[v[j]]--;
              if(mp[v[j]]<0)
              {
                 flag=1;
              }
          }
          if(flag==0)
          {
              cout<<"YES\n";
          }
          else
          {
              cout<<"NO\n";
          }
        }
        else
        {
            cout<<"NO\n";
        }
        v.clear();
        mp.clear();

    }

}