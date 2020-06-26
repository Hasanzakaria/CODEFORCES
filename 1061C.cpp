#include<bits/stdc++.h>
using namespace std;
vector<long long int>v;
vector<long long int>::iterator l;
long long int dp[100001];
long long int mod=1e9+7;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,tt,j,y,t,ans=0;
    dp[0]=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        tt=sqrt(a);
        for(j=1;j<=tt;j++)
        {
            if(a%j==0)
            {
                y=a/j;
                v.push_back(j);
                if(y==j)
                {
                    continue;
                }
                v.push_back(y);
            }
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(l=v.begin();l!=v.end();l++)
        {
           t=*l;
           if(t<=i)
           {
               dp[t]=((dp[t]%mod)+(dp[t-1]%mod))%mod;
           }
        }
        v.clear();
    }
    for(i=1;i<=n;i++)
    {
        ans=((ans%mod)+(dp[i]%mod))%mod;
    }
    cout<<ans<<"\n";

}