#include<bits/stdc++.h>
using namespace std;
bool ara[101][101];
int main()
{
    ios_base::sync_with_stdio(0);
    long long int a,b,c,i,d,e,f,j,l,m,n,ee,r,rr,k,t=0,g,nn;
    cin>>a>>b>>c;
    map<long long int,long long int>mp[101][101];
    for(i=1;i<=a;i++)
    {
        cin>>d>>e>>f;
        mp[d][e][0]=f;
        ara[d][e]=1;
    }
    for(i=1;i<=b;i++)
    {
        t=0;
        cin>>m>>n>>ee>>r>>rr;
        nn=m%(c+1);
        for(j=n;j<=r;j++)
        {
          for(k=ee;k<=rr;k++)
          {
              if(ara[j][k])
              {
                g=((mp[j][k][0]+nn)%(c+1));
                t+=(g%(c+1));
              }

          }
        }
        cout<<t%(c+1)<<endl;
    }




}