#include<bits/stdc++.h>
using namespace std;
string a;
long long int r;
long long int ara[1000000][3][2];
long long int dp(long long int i,long long int j,long long int k)
{
    if(i==r)
    {
        return 0;
    }
    if(ara[i][j][k]!=-1)
    {
        return ara[i][j][k];
    }
    long long int x,f,t;
    x=a[i]-48;
    x=(j*10)+x;
    if(x%3==0)
    {
        f=1+dp(i+1,0,0);
    }
    else
    {
        f=dp(i+1,0,0);
    }
    if(k==0&&x==0)
    {
      t=0;
    }
    else
    {
        t=dp(i+1,x%3,1);
    }
    ara[i][j][k]=max(f,t);
    return ara[i][j][k];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int f;
    memset(ara,-1,sizeof(ara));
    cin>>a;
    r=a.size();
    f=dp(0,0,0);
    cout<<f<<endl;
}