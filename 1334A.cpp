#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,n,j,flag,f;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        flag=0;
        cin>>n;
        pair<long long int,long long int>ara[n];
        for(j=0;j<n;j++)
        {
            cin>>ara[j].first>>ara[j].second;
        }
        if(ara[0].first<ara[0].second)
        {
            flag=1;
        }
        for(j=1;j<n;j++)
        {
            if(ara[j].first>=ara[j-1].first&&ara[j].second>=ara[j-1].second)
            {
                if(ara[j].first>=ara[j].second)
                {
                    f=ara[j].first-ara[j-1].first;
                    if(ara[j].second>ara[j-1].second+f)
                    {
                        flag=1;
                    }
                }
                else
                {
                   flag=1;
                }
            }
            else
            {
                flag=1;
            }
        }
        if(flag)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
}