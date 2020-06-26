#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,p,i,t,y;
    cin>>n>>m>>p;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    long long int ara1[m];
    for(i=0;i<m;i++)
    {
        cin>>ara1[i];
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]%p!=0)
        {
            t=i;
            break;
        }
    }
    for(i=0;i<m;i++)
    {
        if(ara1[i]%p!=0)
        {
            y=i;
            break;
        }
    }
    cout<<t+y<<"\n";

}