#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp,cp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,m,sum,e,f,j;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        mp[ara[i]]=1;
    }
    cin>>m;
    long long int tak[m];
    for(i=0;i<m;i++)
    {
        cin>>tak[i];
        cp[tak[i]]=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum=ara[i]+tak[j];
            if(mp[sum]==0&&cp[sum]==0)
            {
                e=i;
                f=j;
                break;
            }
        }
    }
    cout<<ara[e]<<" "<<tak[f]<<"\n";
}