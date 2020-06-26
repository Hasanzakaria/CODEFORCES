#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
   long long int n,i,k,r,f,t=0,l=0,m,u,j,z,x=0;
   cin>>n;
   long long int ara[n];
   for(i=0;i<n;i++)
   {
       cin>>ara[i];
   }
   sort(ara,ara+n);
   k=n/2;
   r=ara[k-1];
   f=ara[k];
   j=ara[k+1];
   for(i=0;i<n;i++)
   {
      m=r-ara[i];
      if(m<0)
      {
          m=-m;
      }
      t=t+m;
      u=f-ara[i];
      if(u<0)
      {
          u=-u;
      }
      l=l+u;
      z=j-ara[i];
      if(z<0)
      {
          z=-z;
      }
      x=x+z;

   }
   if(t<=l&&t<=x)
   {
       cout<<ara[k-1];
   }
   else if(l<=x)
   {
       cout<<ara[k];
   }
   else
   {
       cout<<ara[k+1];
   }
}