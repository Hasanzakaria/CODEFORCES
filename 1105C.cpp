#include<bits/stdc++.h>
using namespace std;
long long int ara[4];
long long int g,dip[200001][4],mod=1000000007;
long long int dp(long long int a,long long int b)
{
   if(a==g&&b==0)
   {
       return 1;
   }
   else if(a==g&&b!=0)
   {
       return 0;
   }
   if(dip[a][b]!=-1)
   {
       return dip[a][b];
   }
   long long int i,r=0,f;
   for(i=0;i<=2;i++)
   {
       f=((ara[i]%mod)*(dp(a+1,((b+i)%3))%mod))%mod;
       r=((r%mod)+(f%mod))%mod;
   }
   dip[a][b]=r;
   return dip[a][b];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int b,c,k,l,r,rr,i,p,ans;
    cin>>g>>b>>c;
    k=c%3;
    r=c-k;
    l=b%3;
    for(i=1;i<=k;i++)
    {
       ara[i]++;
    }
    if(l!=0)
    {
        for(i=l; ; i++)
        {
            if((i%3)==0)
            {
                ara[0]++;
                break;
            }
            ara[i]++;
        }
        rr=b+(3-l);
    }
    else
    {
        ara[0]++;
        rr=b;
    }
    p=(r-rr)/3;
    ara[0]+=p;
    ara[1]+=p;
    ara[2]+=p;
    memset(dip,-1,sizeof(dip));
    ans=dp(0,0);
    cout<<ans<<"\n";
}