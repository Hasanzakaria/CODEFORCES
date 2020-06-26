#include<bits/stdc++.h>
using namespace std;
long long int n;
string a;
long long int ara[200000];
long long int dip[200000][7];
long long int dp(long long int i,long long int j)
{
    if(i==n)
    {
        if(j!=4)
        {
            return 0;
        }
        else
        {
            return 10000000000000000;
        }
    }
    if(dip[i][j]!=-1)
    {
        return dip[i][j];
    }
    long long int k,l;
    if(a[i]=='h'&&j==0)
    {
        k=dp(i+1,1);
    }
    else if(a[i]=='a'&&j==1)
    {
        k=dp(i+1,2);
    }
    else if(a[i]=='r'&&j==2)
    {
        k=dp(i+1,3);
    }
    else if(a[i]=='d'&&j==3)
    {
        k=dp(i+1,4);
    }
    else
    {
        k=dp(i+1,j);
    }
    l=ara[i]+dp(i+1,j);
    dip[i][j]=min(k,l);
    return dip[i][j];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    cin>>a;
    long long int i,k;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    memset(dip,-1,sizeof(dip));
    k=dp(0,0);
    cout<<k<<"\n";
}