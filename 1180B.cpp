#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,minn=100,flag=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]>=0)
        {
            ara[i]=-ara[i]-1;
        }
    }
    if(n%2==0)
    {
        for(i=0;i<n;i++)
        {
            cout<<ara[i]<<" ";
        }
    }
    else
    {
       for(i=0;i<n;i++)
       {
         minn=min(minn,ara[i]);
       }
       for(i=0;i<n;i++)
       {
         if(ara[i]==minn&&flag==0)
         {
             cout<<-ara[i]-1<<" ";
             flag=1;
         }
         else
         {
             cout<<ara[i]<<" ";
         }
       }
    }

}