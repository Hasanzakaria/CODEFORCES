#include<iostream>
using namespace std;
int main ()
{
   ios_base::sync_with_stdio(0);
   int n,m,i,sum=0,p=1000000000,k,r=0;
   cin>>n>>m;
   int ara[n];
   for(i=0;i<n;i++)
   {
       cin>>ara[i];
   }
   for(i=0;i<m;i++)
   {
      sum=sum+ara[i];
   }
   if(sum<p)
   {
       p=sum;
       k=0;
   }
   for(i=m;i<n;i++)
   {
      sum=sum-ara[r]+ara[i];
      r++;
      if(sum<p)
      {
          p=sum;
          k=r;
      }
   }
   cout<<k+1;


}