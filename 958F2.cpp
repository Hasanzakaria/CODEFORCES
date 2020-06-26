#include<bits/stdc++.h>
using namespace std;
long long int mp[300000],check[300000];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,k,j,cou=0,ans=1000000000,sum=0;
    cin>>n>>m;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=1;i<=m;i++)
    {
        cin>>k;
        mp[i]=k;
        if(k==0)
        {
            cou++;
        }
        sum+=k;
    }
    i=0;
    j=-1;
    while(1)
    {
        if(cou==m)
        {
           ans=min(ans,j-i+1);
           while(check[ara[i]]>mp[ara[i]])
           {
               check[ara[i]]--;
               i++;
               ans=min(ans,j-i+1);
           }
        }
        j++;
        if(j==n)
        {
            break;
        }
        check[ara[j]]++;
        if(check[ara[j]]==mp[ara[j]])
        {
            cou++;
        }
    }
    if(ans==1000000000)
    {
        cout<<-1<<"\n";
    }
    else
    {
        cout<<ans-sum<<"\n";
    }

}