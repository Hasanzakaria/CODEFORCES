#include<iostream>
using namespace std;
int ara[100001];
int main ()
{
   int n,m,r=0,t;
   cin>>n>>m;
   int tak[n],i,faq[n],f=0;
   for(i=0;i<n;i++)
   {
       cin>>tak[i];
       ara[tak[i]]++;
   }
   for(i=0;i<100001;i++)
   {
      if(ara[i]!=0)
      {
          r++;
      }
   }
   faq[f]=r;
   f++;
   for(i=0;i<n-1;i++)
   {
      ara[tak[i]]--;
      if(ara[tak[i]]==0)
      {
          r--;
      }
      faq[f]=r;
      f++;

   }
   for(i=1;i<=m;i++)
   {
       cin>>t;
       cout<<faq[t-1]<<"\n";
   }

}