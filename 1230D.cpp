#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
bool taken[10000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,ans=0,j;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    long long int b[n];
    for(i=0;i<n;i++)
    {
        cin>>b[i];
    }
    for(i=0;i<n;i++)
    {
        if(mp[a[i]]>1)
        {
            ans+=b[i];
            taken[i]=1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(mp[a[i]]>1)
        {
            for(j=0;j<n;j++)
            {
                if(taken[j]==0)
                {
                    if((a[i]|a[j])==a[i])
                    {
                        taken[j]=1;
                        ans+=b[j];
                    }
                }
            }
            mp[a[i]]=0;
        }
    }
    cout<<ans<<"\n";
}