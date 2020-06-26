#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    int  n,i,ans=-1;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mp[ara[i]]++;
        ans=max(ans,mp[ara[i]]);
    }
    cout<<ans<<endl;
}