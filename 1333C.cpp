#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum=0,last=-1,ans=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    mp[0]=-1;
    for(i=0;i<n;i++)
    {
       sum+=ara[i];
       if(mp.count(sum)!=0)
       {
           last=max(last,mp[sum]+1);
       }
       ans+=i-last;
       mp[sum]=i;
    }
    cout<<ans<<"\n";
}