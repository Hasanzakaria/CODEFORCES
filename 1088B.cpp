#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,i,l=0,j,r=0;
    cin>>n>>m;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    for(i=1;i<=m;i++)
    {
       if(l>=n)
       {
           cout<<0<<endl;
           continue;
       }
       ara[l]-=r;
       if(ara[l]==0)
       {
           l++;
           i--;
           continue;
       }
       cout<<ara[l]<<endl;
       r+=ara[l];
       l++;

    }
}