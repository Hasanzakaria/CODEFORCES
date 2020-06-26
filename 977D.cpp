#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp,tp,rp[1000];
long long int n;
long long int dp(long long int i,long long int r)
{
   if(tp[r]==0)
   {
       return 0;
   }
   else
   {
       tp[r]--;
   }
   if(i==n-1)
   {
       return 1;
   }
   long long int x=0,y=0;
   x=dp(i+1,r*2);
   if(r%3==0)
   {
       y=dp(i+1,r/3);
   }
   if(x==1)
   {
       rp[i][r]=r*2;
   }
   else if(y==1)
   {
      rp[i][r]=r/3;
   }
   return x||y;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int i,k,t;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mp[ara[i]]++;
    }
    for(i=0;i<n;i++)
    {
        tp=mp;
        k=dp(0,ara[i]);
        if(k==1)
        {
           t=ara[i];
           break;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<t<<" ";
        t=rp[i][t];
    }

}