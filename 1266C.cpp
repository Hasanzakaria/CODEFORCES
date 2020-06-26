#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,j,i,k,f=-1,flag=0,r;
    cin>>n>>m;
    long long  int ara[n][m];
    for(i=n+1; i<=n+m; i++)
    {
        f++;
        for(j=1; j<=n; j++)
        {
            k=(i*j)/(__gcd(i,j));
            ara[j-1][f]=k;
        }
    }
    for(i=0;i<n;i++)
    {
        r=ara[i][0];
        for(j=1;j<m;j++)
        {
            r=__gcd(r,ara[i][j]);
        }
        if(mp[r])
        {
            flag=1;
        }
        else
        {
            mp[r]=1;
        }
    }
    for(i=0;i<m;i++)
    {
        r=ara[0][i];
        for(j=1;j<n;j++)
        {
            r=__gcd(r,ara[j][i]);
        }
        if(mp[r])
        {
            flag=1;
        }
        else
        {
            mp[r]=1;
        }
    }
    if(m==1)
    {
        for(j=0;j<n;j++)
        {
           ara[j][0]=j+2;
        }
        if(n!=1)
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                cout<<ara[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    else
    {
       cout<<0<<"\n";
    }

}