#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,c,i,f,ans=0,cou=0,t=0;
    cin>>a>>b>>c;
    f=b*c;
    long long int ara[a],jak[a];
    for(i=0;i<a;i++)
    {
        cin>>ara[i];
        jak[i]=ara[i];
    }
    sort(ara,ara+a);
    reverse(ara,ara+a);
    for(i=0;i<f;i++)
    {
        mp[ara[i]]++;
        ans+=ara[i];
    }
    cout<<ans<<"\n";
    for(i=0;i<a;i++)
    {
        if(mp[jak[i]]!=0)
        {
            mp[jak[i]]--;
            cou++;
        }
        if(cou==b)
        {
            cout<<i+1<<" ";
            cou=0;
            t++;
        }
        if(t==c-1)
        {
            break;
        }
    }

}