#include<bits/stdc++.h>
using namespace std;
long long int a,b;
long long int ara[100];
long long int dip[101][10001];
long long int dp(long long int i,long long int j)
{
    if(i==a)
    {
        return 0;
    }
    if(dip[i][j]!=-1)
    {
        return dip[i][j];
    }
    long long int k=0,r,l;
    r=(a-i)*ara[i];
    if(j-r>=0)
    {
        k=1+dp(i+1,j-r);
    }
    l=dp(i+1,j);
    dip[i][j]=max(k,l);
    return dip[i][j];

}
int main ()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int i,t;
    cin>>a>>b;
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
    }
    memset(dip,-1,sizeof(dip));
    t=dp(0,b);
    cout<<t<<"\n";
}