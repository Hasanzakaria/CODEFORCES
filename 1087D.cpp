#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,b;
    double m,ans,cou=0;
    cin>>n>>m;
    for(i=1;i<n;i++)
    {
        cin>>a>>b;
        mp[a]++;
        mp[b]++;
    }
    for(i=1;i<=n;i++)
    {
        if(mp[i]==1)
        {
           cou++;
        }
    }
    ans=m/cou;
    ans=2*ans;
    printf("%.7f\n",ans);

}