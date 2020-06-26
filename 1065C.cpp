#include<bits/stdc++.h>
using namespace std;
long long int mp[300000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,minn=1e10,maxx=0,x=0,cou=0;
    cin>>n>>m;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mp[ara[i]]++;
        minn=min(minn,ara[i]);
        maxx=max(maxx,ara[i]);
    }
    for(i=maxx;i>=minn;i--)
    {
        mp[i]+=mp[i+1];
    }
    while(maxx>minn)
    {
        x+=mp[maxx];
        if(x>m)
        {
            cou++;
            x=mp[maxx];
        }
        maxx--;
    }
    if(x>0)
    {
        cou++;
    }
    cout<<cou<<"\n";
}