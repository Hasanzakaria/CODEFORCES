#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,j;
    cin>>n>>m;
    for(i=1;i<=n/2;i++)
    {
       for(j=1;j<=m;j++)
       {
           cout<<i<<" "<<j<<"\n";
           cout<<n+1-i<<" "<<m+1-j<<"\n";
       }
    }
    if(n%2!=0)
    {
        for(j=1;j<=m/2;j++)
        {
            cout<<i<<" "<<j<<"\n";
            cout<<n+1-i<<" "<<m+1-j<<"\n";
        }
        if(m%2!=0)
        {
            cout<<i<<" "<<(m/2)+1<<"\n";
        }
    }

}