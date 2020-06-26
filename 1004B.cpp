#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int m,n,i,j,l;
    cin>>m>>n;
    char jak[m];
    pair<int,int>pq[n];
    for(i=1;i<=n;i++)
    {
        cin>>pq[i-1].first>>pq[i-1].second;
    }
    sort(pq,pq+n);
    for(i=0;i<n;i++)
    {
        for(j=pq[i].first;j<=pq[i].second;j++)
        {
           l=j-1;
           if(l==0&&mp[0]==0)
           {
              jak[l]='0';
              mp[0]=1;
           }
           else if(mp[l]==0)
           {
               mp[l]=1;
               if(jak[l-1]=='0')
               {
                   jak[l]='1';
               }
               else
               {
                   jak[l]='0';
               }
           }
        }
    }
    for(i=0;i<m;i++)
    {
        if(mp[i]==0)
        {
            jak[i]='0';
        }
    }
    for(i=0;i<m;i++)
    {
        cout<<jak[i];
    }
}