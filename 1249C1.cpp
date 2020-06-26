#include<bits/stdc++.h>
using namespace std;
long long int a;
long long int power[39];
long long int dip[39][10001];
long long int dp(long long int e,long long int w)
{
    if(w>a)
    {
        return w ;
    }
    if(e==39)
    {
        if(w==a)
        {
            return w;
        }
        else
        {
            return 1e12;
        }
    }
    if(dip[e][w]!=-1)
    {
        return dip[e][w];
    }
    long long int x,y;
    x=dp(e+1,w+power[e]);
    y=dp(e+1,w);
    dip[e][w]=min(x,y);
    return dip[e][w];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,r,j,ans;
    r=1;
    for(i=0;i<=38;i++)
    {
        power[i]=r;
        r*=3;
    }
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        memset(dip,-1,sizeof(dip));
        ans=dp(0,0);
        cout<<ans<<"\n";
    }

}