#include<bits/stdc++.h>
using namespace std;
long long int mp[1000001];
vector<long long int>v;
vector<long long int>::iterator l;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,j,t,r,f,x,u,p,w,q,o,m,cou=0,ans=-1,flag=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        ans=-1;
        cin>>a;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            mp[ara[j]]=1;
        }
        sort(ara,ara+a);
        t=0;
        r=a-1;
        f=ara[t]*ara[r];
        v.push_back(f);
        x=a/2;
        if(a%2!=0)
        {
            x++;
        }
        for(j=1;j<x;j++)
        {
           p=a-1;
           f=ara[j]*ara[p];
           v.push_back(f);
        }
        sort(v.begin(),v.end());
        for(l=v.begin();l!=v.end();l++)
        {
           flag=0;
           w=*l;
           o=sqrt(w);
           cou=0;
           for(q=2;q<=o;q++)
           {
               if(w%q==0)
               {
                  m=w/q;
                  if(mp[q]==1)
                  {
                      cou++;
                  }
                  else
                  {
                      flag=1;
                      break;
                  }
                  if(q==m)
                  {
                      continue;
                  }
                  if(mp[m]==1)
                  {
                      cou++;
                  }
                  else
                  {
                      flag=1;
                      break;
                  }
               }
           }
           if(cou==a&&flag==0)
           {
              ans=w;
              break;
           }
        }
        cout<<ans<<"\n";
        v.clear();
        memset(mp,0,sizeof(mp));
    }

}