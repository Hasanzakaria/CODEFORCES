#include<bits/stdc++.h>
using namespace std;
long long int n,height1[100001],height2[100001];
long long int dip[100001][5];
long long int dp(long long int i,long long int flag)
{
   if(i==n)
   {
       return 0;
   }
   if(dip[i][flag]!=-1)
   {
       return dip[i][flag];
   }
   long long int k=0,l=0,p=0,r;
   if(flag==0)
   {
       k=height1[i]+dp(i+1,1);
       l=height2[i]+dp(i+1,2);
       p=dp(i+1,0);
   }
   else if(flag==1)
   {
       k=height2[i]+dp(i+1,2);
       l=dp(i+1,flag);
   }
   else
   {
       k=height1[i]+dp(i+1,1);
       l=dp(i+1,flag);
   }
   r=max(k,l);
   dip[i][flag]=max(r,p);
   return dip[i][flag];
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    long long int i,l;
    for(i=0;i<n;i++)
    {
        cin>>height1[i];
    }
    for(i=0;i<n;i++)
    {
        cin>>height2[i];
    }
    memset(dip,-1,sizeof(dip));
    l=dp(0,0);
    cout<<l<<"\n";
}