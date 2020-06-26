#include<bits/stdc++.h>
using namespace std;
long long int ara[300000],n;
long long int dip[300000][4][4];
long long int dp(long long int i,long long int cou,long long int flag)
{
    if(flag==2)
    {
        if((cou%2)!=0)
        {
            return 1;
        }
        return 0;
    }
    if(i==n)
    {
        return 0;
    }
    if(dip[i][cou][flag]!=-1)
    {
        return dip[i][cou][flag];
    }
    long long int k=0,l=0,f=0,r=0;
    if(ara[i]<0)
    {
        f=1;
    }
    if(flag==0)
    {
        k=dp(i+1,0,0);
        l=dp(i+1,(cou+f)%2,1);
        r=dp(i+1,(cou+f)%2,2);
    }
    else
    {
        l=dp(i+1,(cou+f)%2,1);
        r=dp(i+1,(cou+f)%2,2);
    }
    dip[i][cou][flag]=k+l+r;
    return dip[i][cou][flag];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i,k,l;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    memset(dip,-1,sizeof(dip));
    k=dp(0,0,0);
    l=(n*(n+1))/2;
    l-=k;
    cout<<k<<" "<<l<<"\n";
}