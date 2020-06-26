#include<bits/stdc++.h>
using namespace std;
map<int,int>mp[11];
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,i,j,cou,ans=0;
    unsigned long long int l,p,r,t,k;
    long double w,q;
    cin>>n>>m;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n;i++)
    {
      k=ara[i];
      l=1;
      for(j=1;j<=10;j++)
      {
         l*=10;
         p=k*l;
         r=p/m;
         q=m;
         w=p/q;
         if(r!=w)
         {
           r++;
         }
         t=(r*m)-p;
         mp[j][t]++;
      }
    }
    for(i=0;i<n;i++)
    {
        cou=1;
        k=ara[i];
        while(k/10!=0)
        {
            k/=10;
            cou++;
        }
        ans+=mp[cou][(ara[i])%m];
        k=ara[i];
        for(j=1;j<=cou;j++)
        {
           k=k*10;
        }
        r=k/m;
        q=m;
        w=k/q;
        if(r!=w)
        {
            r++;
        }
        t=(r*m)-k;
        if(t==(ara[i]%m))
        {
            ans--;
        }
    }
    cout<<ans<<endl;
}