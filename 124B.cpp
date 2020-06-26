#include<bits/stdc++.h>
using namespace std;
long long int n,m;
long long int taken[12],ara[12][12],ans=100000000000;
string s[12];
void permu(long long int pos)
{
    if(pos==m+1)
    {
        long long int k,r,p,t,maxx=-10,minn=100000000000;
        for(k=0;k<n;k++)
        {
            p=1;
            t=0;
            for(r=m;r>=1;r--)
            {
                t+=(ara[k][r]*p);
                p=p*10;
            }
            maxx=max(maxx,t);
            minn=min(minn,t);
        }
        ans=min(ans,maxx-minn);
        return ;
    }
    long long int i,j;
    for(i=0;i<m;i++)
    {
        if(taken[i]==0)
        {
            taken[i]=1;
            for(j=0;j<n;j++)
            {
                ara[j][pos]=s[j][i]-48;
            }
            permu(pos+1);
            taken[i]=0;
        }
    }
}
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int i;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>s[i-1];
    }
    permu(1);
    cout<<ans<<endl;

}