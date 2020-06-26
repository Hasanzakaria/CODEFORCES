#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int a,b,i,k,l=0,f=0;
   cin>>a>>b;
   int ara[a];
   for(i=0;i<a;i++)
   {
       cin>>ara[i];
   }
   for(i=0;i<a;i++)
   {
       if(ara[i]>2*b)
       {
           l+=ara[i]/(2*b);
           ara[i]=ara[i]%(2*b);
       }
       if(ara[i]>b)
       {
           l++;
           ara[i]=0;
       }
       if(ara[i]<=b&&ara[i]!=0)
       {
         f++;
       }
   }
   l+=f/2;
   if(f%2!=0)
   {
       l++;
   }
   cout<<l;
}