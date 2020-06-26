#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,low,high,j,ans,y=1000000000,r;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=1;i<=100;i++)
    {
       low=i-1;
       high=i+1;
       ans=0;
       for(j=0;j<n;j++)
       {
           if(ara[j]<low)
           {
             ans+=(low-ara[j]);
           }
           else if(ara[j]>high)
           {
               ans+=(ara[j]-high);
           }
       }
       y=min(y,ans);
       if(y==ans)
       {
         r=i;
       }
    }
    cout<<r<<" "<<y<<"\n";
}