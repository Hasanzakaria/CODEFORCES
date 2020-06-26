#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    map<long long int,long long int>mp;
    long long int n,m,i,l,t=0,f,r,ll=0,e=0;
    cin>>n>>m;
    long long int ara[n],jak[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        jak[i]=ara[i];
    }
    sort(ara,ara+n);
    l=n-1;
    for(i=1;i<=m;i++)
    {
       t+=ara[l];
       mp[ara[l]]++;
       l--;
    }
    cout<<t<<endl;
    for(i=0;i<n;i++)
    {
        if(e==m-1)
        {
            break;
        }
        if(mp[jak[i]]>0)
        {
           cout<<i-ll+1<<" ";
           ll=i+1;
           mp[jak[i]]--;
           e++;
        }
    }
    cout<<n-i<<endl;


}