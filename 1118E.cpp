#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,k=1,t,f,flag=0;
    cin>>n>>m;
    long long int ara[n],jak[n];
    for(i=0;i<n;i++)
    {
        ara[i]=k;
        k++;
        if(k==m+1)
        {
            k=1;
        }
    }
    t=1;
    for(i=0;i<n;i++)
    {
        if(ara[i]==1)
        {
           t++;
           if(t==m+1)
           {
               t=1;
               flag=1;
           }
           f=t;
        }
        jak[i]=f;
        f++;
        if(f==m+1)
        {
            f=1;
        }
    }
    if(flag==0)
    {
        cout<<"YES\n";
        for(i=0;i<n;i++)
        {
            cout<<ara[i]<<" "<<jak[i]<<"\n";
        }
    }
    else
    {
        cout<<"NO\n";
    }
}