#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
vector<long long int>::iterator l;
long long int t;
long long int dip[25][4][4][26];
long long int dp(long long int pos,long long int small,long long int start,long long int value)
{
    if(pos==t)
    {
        if(value<=3)
        {
           return 1;
        }
        else
        {
            return 0;
        }
    }
    if(dip[pos][small][start][value]!=-1)
    {
        return dip[pos][small][start][value];
    }
    long long int range,ret=0,i;
    if(small==1)
    {
        range=9;
    }
    else
    {
        range=v[pos];
    }
    if(start)
    {
        for(i=1;i<=range;i++)
        {
            ret+=dp(pos+1,small|i<range,0,(i>0)+value);
        }
        ret+=dp(pos+1,1,1,0);
    }
    else
    {
        for(i=0;i<=range;i++)
        {
            ret+=dp(pos+1,small|i<range,0,(i>0)+value);
        }
    }
    dip[pos][small][start][value]=ret;
    return dip[pos][small][start][value];
}
long long int call(long long int b)
{
    long long int tt;
    if(b<=9)
    {
        return b+1;
    }
    else
    {
        while(b%10!=0||b/10!=0)
        {
            tt=b%10;
            v.push_back(tt);
            b/=10;
        }
        reverse(v.begin(),v.end());
        t=v.size();
        return dp(0,0,1,0);
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,k,l;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        v.clear();
        memset(dip,-1,sizeof(dip));
        k=call(b);
        v.clear();
        memset(dip,-1,sizeof(dip));
        l=call(a-1);
        cout<<k-l<<"\n";
    }
}