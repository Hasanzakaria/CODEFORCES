 #include<bits/stdc++.h>
 using namespace std;
 long long int dp[100001],mod=1e9+7;
 int main ()
 {
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     string a;
     cin>>a;
     long long int k,i,f=0;
     k=a.size();
     for(i=k-1;i>=0;i--)
     {
         if(a[i]=='b')
         {
             dp[i]=dp[i+1];
             f=dp[i];
         }
         else if(a[i]=='a')
         {
             dp[i]=f%mod;
             dp[i]++;
             dp[i]%=mod;
             dp[i]=((dp[i]%mod)+(dp[i+1]%mod))%mod;
         }
         else
         {
             dp[i]=dp[i+1];
         }
     }
     cout<<dp[0]<<"\n";
 }