#include<bits/stdc++.h>
using namespace std;
long long int mp[1000000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,flag=0,cou=0,start=-1,endd,maxx=-1,maxx1=-1,maxx2=-1;
    cin>>n>>m;
    long long int ara[n];
    endd=n;
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mp[ara[i]]++;
        if(ara[i]==m&&flag==0)
        {
            cou++;
            flag=1;
            start=i;
            endd=i;
        }
        else if(ara[i]==m)
        {
            cou++;
            endd=i;
        }
    }
    for(i=1;i<=500000;i++)
    {
      maxx=max(maxx,mp[i]);
    }
    memset(mp,0,sizeof(mp));
    for(i=0;i<start;i++)
    {
        mp[ara[i]]++;
    }
    for(i=1;i<=500000;i++)
    {
      maxx1=max(maxx1,mp[i]);
    }
    maxx1+=cou;
    memset(mp,0,sizeof(mp));
    for(i=endd+1;i<n;i++)
    {
        mp[ara[i]]++;
    }
    for(i=1;i<=500000;i++)
    {
      maxx2=max(maxx2,mp[i]);
    }
    maxx2+=cou;
    long long int ans;
    ans=max(maxx,maxx1);
    ans=max(ans,maxx2);
    cout<<ans<<"\n";
}