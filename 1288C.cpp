#include<bits/stdc++.h>
using namespace std;
long long int n,m,mod=1e9+7,dip[40][2000];
long long int dp(long long int pos,long long int val)
{
    if(pos==2*m)
    {
        return 1;
    }
    if(val>n)
    {
        return 0;
    }
    if(dip[pos][val]!=-1)
    {
        return dip[pos][val];
    }
    long long int k,l;
    k=dp(pos+1,val);
    l=dp(pos,val+1);
    dip[pos][val]=(k+l)%mod;
    return dip[pos][val];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m;
    long long int ans;
    memset(dip,-1,sizeof(dip));
    ans=dp(0,1);
    cout<<ans<<"\n";
}