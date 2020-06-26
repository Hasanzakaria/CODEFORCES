#include<bits/stdc++.h>
using namespace std;
bool ara[200001][26];
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,j,k,i,r,flag,ans=0,u;
    string c;
    cin>>n;
    for(j=1;j<=n;j++)
    {
        cin>>c;
        k=c.size();
        for(i=0;i<k;i++)
        {
           r=c[i]-'a';
           ara[j][r]=1;
        }
    }
    for(i=0;i<26;i++)
    {
        flag=0;
        u=0;
        for(j=1;j<=n;j++)
        {
            if(ara[j][i]==1&&mp[j]==1)
            {
                flag=1;
            }
            if(ara[j][i]==1)
            {
                mp[j]=1;
                u=1;
            }
        }
        if(flag==0&&u==1)
        {
          ans++;
        }
    }
    cout<<ans<<"\n";
}