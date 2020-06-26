#include<bits/stdc++.h>
using namespace std;
map<unsigned long long int,unsigned long long int>mp;
vector<unsigned long long int>v;
vector<unsigned long long int>::iterator l;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long int a,b,i=2,f,ans=0,p=18446744073709551615,o,t;
    cin>>a>>b;
    while(i<=sqrt(b))
    {
        if((b%i)==0)
        {
            while((b%i)==0)
            {
                b/=i;
                mp[i]++;
            }
            v.push_back(i);
        }
        i++;
    }
    if(b>1)
    {
        mp[b]++;
        v.push_back(b);
    }
    for(l=v.begin();l!=v.end();l++)
    {
      f=*l;
      o=f;
      ans=0;
      while((a/f)>=1)
      {
          ans+=(a/f);
          t=f;
          f=f*o;
          if(f/o!=t)
          {
              break;
          }
      }
      p=min(p,ans/(mp[o]));
    }
    cout<<p<<"\n";

}