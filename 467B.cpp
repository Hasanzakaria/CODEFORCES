#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int  n,m,r,i,k,rr,p=0;
   cin>>n>>m>>r;
   int ara[m+1];
   for(i=0;i<=m;i++)
   {
       cin>>ara[i];
   }
   k=ara[m];
   for(i=0;i<m;i++)
   {
       rr=k^ara[i];
       if(__builtin_popcount(rr)<=r)
       {
         p++;
       }
   }
   cout<<p<<endl;

}