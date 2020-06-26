#include<bits/stdc++.h>
using namespace std;
string s;
long long int sizee;
long long int dip[100000];
long long int mod=1e9+7;
long long int dp(long long int pos)
{
    if(pos>=sizee)
    {
        return 1;
    }
    if(dip[pos]!=-1)
    {
        return dip[pos];
    }
    long long int k=0,l=0;
    if((s[pos]==s[pos-1]&&s[pos]=='u')||(s[pos]==s[pos-1]&&s[pos]=='n'))
    {
        k=dp(pos+2);
        l=dp(pos+1);
    }
    else
    {
        k=dp(pos+1);
    }
    dip[pos]=(k+l)%mod;
    return dip[pos];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>s;
    sizee=s.size();
    long long int ans,i,flag=0;
    for(i=0;i<sizee;i++)
    {
        if(s[i]=='w'||s[i]=='m')
        {
           flag=1;
        }
    }
    if(flag==1)
    {
        cout<<0<<"\n";
    }
    else
    {
       memset(dip,-1,sizeof(dip));
       ans=dp(1);
       cout<<ans<<"\n";
    }
}