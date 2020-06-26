#include<bits/stdc++.h>
using namespace std;
long long int n,h,l,r;
long long int ara[2000],dip[2000][2000];
long long int dp(long long int pos,long long int wake)
{
    if(pos==n)
    {
        return 0;
    }
    if(dip[pos][wake]!=-1)
    {
        return dip[pos][wake];
    }
    long long int k,t,p;
    p=(wake+ara[pos])%h;
    if(p>=l&&p<=r)
    {
        k=1+dp(pos+1,p);
    }
    else
    {
        k=dp(pos+1,p);
    }
    p=(wake+ara[pos]-1)%h;
    if(p>=l&&p<=r)
    {
        t=1+dp(pos+1,p);
    }
    else
    {
        t=dp(pos+1,p);
    }
    dip[pos][wake]=max(k,t);
    return dip[pos][wake];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int ans,i;
    cin>>n>>h>>l>>r;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    memset(dip,-1,sizeof(dip));
    ans=dp(0,0);
    cout<<ans<<"\n";
}