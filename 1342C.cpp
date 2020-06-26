#include<bits/stdc++.h>
using namespace std;
long long int ara[1000000];
long long int solve(long long int range,long long int lcm)
{
    long long int ans,x;
    long long int y=(range+1)/lcm;
    ans=ara[lcm-1]*y;
    x=range-(lcm*y);
    ans+=ara[x];
    return ans;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,x,l,j,upper,m,n,lower;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>x;
        l=(a*b)/__gcd(a,b);
        for(j=0;j<l;j++)
        {
            if(((j%a)%b)!=((j%b)%a))
            {
                ara[j]=1;
            }
            else
            {
                ara[j]=0;
            }
        }
        for(j=1;j<l;j++)
        {
            ara[j]+=ara[j-1];
        }
        for(j=1;j<=x;j++)
        {
            cin>>m>>n;
            upper=solve(n,l);
            lower=solve(m-1,l);
            cout<<upper-lower<<" ";
        }
        cout<<"\n";
        for(j=0;j<l;j++)
        {
            ara[l]=0;
        }
    }
}