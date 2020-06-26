#include<bits/stdc++.h>
using namespace std;
int main ()
{
   ios_base::sync_with_stdio(0);
   map<long long int,long long int>mp;
   long long int a,b,i,t=0;
   cin>>a>>b;
   long long int ara[a];
   for(i=0;i<a;i++)
   {
       cin>>ara[i];
   }
   for(i=0;i<a;i++)
   {
     if(ara[i]>b)
     {
         break;
     }
     t++;
     mp[i]=1;
   }
   for(i=a-1;i>=0;i--)
   {
       if(ara[i]>b||mp[i]==1)
       {
           break;
       }
       t++;
   }
   cout<<t<<endl;

}