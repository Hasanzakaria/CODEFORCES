#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int x,y,a,b,k,t,i,l,r,cou=0;
    cin>>x>>y>>a>>b;
    k=b/a;
    t=sqrt(k);
    if(b%a!=0)
    {
        cout<<0<<endl;
    }
    else
    {
        for(i=1;i<=t;i++)
        {
          if(k%i==0)
          {
              l=k/i;
              r=__gcd(l,i);
              if(r==1&&min(i*a,l*a)>=x&&max(i*a,l*a)<=y)
              {
                  if(i==l)
                  {
                     cou++;
                  }
                  else
                  {
                      cou+=2;
                  }
              }
          }
        }
        cout<<cou<<endl;
    }
}