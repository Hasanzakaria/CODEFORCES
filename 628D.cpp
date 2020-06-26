#include<bits/stdc++.h>
using namespace std;
long long int a,b;
string s,t,f;
long long int r,mod=1000000007;
long long int dip[2000][2][2][2000][2];
long long int dp(long long int pos,long long int small,long long int start,long long int rem,long long int v)
{
    if(r==pos)
    {
        if(rem==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(dip[pos][small][start][rem][v]!=-1)
    {
        return dip[pos][small][start][rem][v];
    }
    long long int range;
    if(small==1)
    {
        range=9;
    }
    else
    {
        range=f[pos]-48;
    }
    long long int i,ret=0;
    if(start&&v!=1)
    {
        for(i=1;i<=range;i++)
        {
            if(i==b)
            {
                continue;
            }
            ret+=dp(pos+1,small|i<range,0,((rem*10)+i)%a,(v+1)%2);
        }
        ret+=dp(pos+1,1,1,0,0);
    }
    else if(start==0&&v!=1)
    {
        for(i=0;i<=range;i++)
        {
            if(i==b)
            {
                continue;
            }
           ret+=dp(pos+1,small|i<range,0,((rem*10)+i)%a,(v+1)%2);
        }
    }
    else if(v==1)
    {
        if(b<range)
        {
            ret=dp(pos+1,small|1,0,((rem*10)+b)%a,(v+1)%2);
        }
        else if(b==range)
        {
           ret=dp(pos+1,small|0,0,((rem*10)+b)%a,(v+1)%2);
        }
        else
        {
            ret=0;
        }
    }
    dip[pos][small][start][rem][v]=ret%mod;
    return dip[pos][small][start][rem][v];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int ans,ans1,i,u,n=0,flag=0,x=0,ans2;
    cin>>a>>b;
    cin>>s>>t;
    r=s.size();
    f=s;
    memset(dip,-1,sizeof(dip));
    ans=dp(0,0,1,0,0);
    f=t;
    memset(dip,-1,sizeof(dip));
    ans1=dp(0,0,1,0,0);
    for(i=0;i<r;i++)
    {
        u=s[i]-48;
        n=(n*10)+u;
        n%=a;
        if(u==b&&i%2==0)
        {
            flag=1;
        }
        else if(i%2!=0&&u!=b)
        {
            flag=1;
        }
    }
    ans2=((ans1%mod)-(ans%mod)+mod)%mod;
    if(flag==0&&n==0)
    {
        x=1;
    }
    cout<<(ans2+x)%mod<<"\n";
}