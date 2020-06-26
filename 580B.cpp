#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
int main ()
{
    long long int n,m,i,k,r=0,f,p=0,u=0;
    cin>>n>>m;
    pair<long long int,long long int>ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i].first>>ara[i].second;
    }
    sort(ara,ara+n);
    k=ara[r].second;
    p=k;
    for(i=1;i<n;i++)
    {
       f=ara[i].first-ara[r].first;
       if(f<m)
       {
          p+=ara[i].second;
       }
       else
       {
         if(p>u)
         {
             u=p;
         }
         p-=k;
         r++;
         k=ara[r].second;
         i--;
       }
    }
    if(p>u)
    {
        u=p;
    }
    cout<<u;



}