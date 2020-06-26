#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,j,cou,f;
    cin>>t;
    for(i=1;i<=t;i++)
    {
      cin>>a>>b;
      f=0;
      cou=0;
      long long int ara[a];
      for(j=0;j<a;j++)
      {
          cin>>ara[j];
      }
      sort(ara,ara+a);
      for(j=a-1;j>=0;j--)
      {
          if(mp[ara[j]]==0)
          {
              if(ara[j]-(f*b)>0)
              {
                  cou++;
                  f++;
              }
          }
          mp[ara[j]]=1;
      }
      cout<<cou<<"\n";
      mp.clear();
    }

}