#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,i,l,cou=0,t,ll;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    sort(ara,ara+n);
    ll=0;
    for(i=n-2;i>=0;i--)
    {
       if(ara[i]<ara[i+1])
       {
         t=n-1-i-cou;
         if(t>0)
         {
             cou++;
         }
         ll=n-1-i;
       }
       else if(ara[i]==ara[i+1])
       {
          t=ll-cou;
          if(t>0)
          {
              cou++;
          }
       }
    }
    cout<<cou<<endl;



}