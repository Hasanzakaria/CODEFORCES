#include<bits/stdc++.h>
using namespace std;
long long int mp[200],check[200];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,k,j,cou=0,flag=0,f;
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
    }
    f=cou;
    for(i=0;i<n;i++)
    {
        cou=f;
        for(j=i;j<n;j++)
        {
           check[ara[j]]++;
           if(check[ara[j]]==mp[ara[j]])
           {
              cou++;
           }
           if(check[ara[j]]>mp[ara[j]])
           {
               break;
           }
           if(cou==m)
           {
              flag=1;
           }
        }
        memset(check,0,sizeof(check));
    }
    if(flag)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

}