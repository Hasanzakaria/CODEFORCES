#include<bits/stdc++.h>
using namespace std;
long long int n,ara[200001];
long long int dip[100010][3][35];
long long int dp(long long int i,long long int start,long long int maxx)
{
    if(start==2)
    {
        return -maxx;
    }
    if(i==n)
    {
        return dp(i-1,2,maxx);
    }
    if(dip[i][start][maxx]!=-1e10)
    {
        return  dip[i][start][maxx];
    }
    long long int k,l;
    if(start==0)
    {
        k=ara[i]+dp(i+1,1,ara[i]);
        l=dp(i+1,0,maxx);
    }
    else
    {
        k=ara[i]+dp(i+1,1,max(maxx,ara[i]));
        l=dp(i-1,2,maxx);
    }
    dip[i][start][maxx]=max(k,l);
    return  dip[i][start][maxx];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    long long int i,k,j,l;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(j=0;j<100010;j++)
    {
        for(k=0;k<3;k++)
        {
            for(l=0;l<35;l++)
            {
                dip[j][k][l]=-1e10;
            }
        }
    }
    k=dp(0,0,10000);
    cout<<k<<"\n";
}