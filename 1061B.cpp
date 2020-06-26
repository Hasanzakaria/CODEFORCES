#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,k=0,ans=0,maxx=-1,sum=0;
    cin>>n>>m;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(i=0;i<n;i++)
    {
        maxx=max(maxx,ara[i]);
        if(k<ara[i])
        {
            k++;
        }
        else
        {
            ans++;
        }
        sum+=ara[i];
    }
    cout<<sum-(ans+k+(maxx-k))<<"\n";
}