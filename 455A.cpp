#include<bits/stdc++.h>
using namespace std;
long long int cou[1000000],pp[100001];
long long int dp(long long int i)
{
    if(i<=0)
    {
        return 0;
    }
    if(pp[i]!=-1)
    {
        return pp[i];
    }
    long long int x,y;
    x=cou[i]*i+dp(i-2);
    y=dp(i-1);
    pp[i]=max(x,y);
    return pp[i];
}
int main ()
{
    memset(pp,-1,sizeof(pp));
    long long int n,i,x=0,t;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        cou[ara[i]]++;
        x=max(x,ara[i]);
    }
    t=dp(x);
    cout<<t<<endl;
}