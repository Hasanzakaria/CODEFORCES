#include<bits/stdc++.h>
using namespace std;
multiset<long long int>mp;
multiset<long long int>::iterator l;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,x,k;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=1;i<=n;i++)
    {
       cin>>x;
       mp.insert(x);
    }
    for(i=0;i<n;i++)
    {
        k=n-ara[i];
        l=mp.lower_bound(k);
        if(l!=mp.end())
        {
            cout<<(ara[i]+(*l))%n<<" ";
            mp.erase(l);
        }
        else
        {
            l=mp.begin();
            cout<<(ara[i]+(*l))%n<<" ";
            mp.erase(l);
        }
    }
}