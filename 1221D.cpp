#include<bits/stdc++.h>
using namespace std;
long long int n;
long long int height[400000],cost[400000];
long long int dip[400000][5][5];
long long int dp(long long int i,long long int k,long long int r)
{
    if(k==4)
    {
        return 1000000000000000001;
    }
    if(i==n)
    {
        return 0;
    }
    if(dip[i][k][r]!=-1)
    {
        return dip[i][k][r];
    }
    long long int u=1000000000000000001,l=1000000000000000001;
    u=cost[i]+dp(i,k+1,r);
    if(i==0)
    {
        l=dp(i+1,0,k);
    }
    else
    {
        if((height[i]+k)!=height[i-1]+r)
        {
            l=dp(i+1,0,k);
        }
    }
    dip[i][k][r]=min(u,l);
    return dip[i][k][r];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int q,i,j,k,r;
    cin>>q;
    for(i=1;i<=q;i++)
    {
       cin>>n;
       for(j=0;j<n;j++)
       {
           cin>>height[j]>>cost[j];
       }
       for(j=0;j<=n;j++)
       {
           for(k=0;k<5;k++)
           {
               for(r=0;r<5;r++)
               {
                   dip[j][k][r]=-1;
               }
           }
       }
       k=dp(0,0,0);
       cout<<k<<"\n";
    }
}