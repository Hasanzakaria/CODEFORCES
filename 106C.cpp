#include<bits/stdc++.h>
using namespace std;
long long int b,c,d;
long long int t_stuff[10],c_stuff[10],c_dough[10],cost[10];
long long int dip[11][101][1001];
long long int dp(long long int i,long long int j,long long int k)
{
    if(i==b)
    {
        return d*(k/c);
    }
    if(dip[i][j][k]!=-1)
    {
        return dip[i][j][k];
    }
    long long int p=0,l;
    if(j-c_stuff[i]>=0&&k-c_dough[i]>=0)
    {
        p=cost[i]+dp(i,j-c_stuff[i],k-c_dough[i]);
    }
    l=dp(i+1,t_stuff[i+1],k);
    dip[i][j][k]=max(p,l);
    return dip[i][j][k];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,i,x,y,z,r,t;
    cin>>a>>b>>c>>d;
    for(i=1;i<=b;i++)
    {
        cin>>x>>y>>z>>r;
        t_stuff[i-1]=x;
        c_stuff[i-1]=y;
        c_dough[i-1]=z;
        cost[i-1]=r;
    }
    memset(dip,-1,sizeof(dip));
    t=dp(0,t_stuff[0],a);
    cout<<t<<"\n";
}