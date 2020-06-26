#include<iostream>
using namespace std;
int main ()
{
   int a,i,k,flag=0;
   cin>>a;
   char jak[a+1];
   cin>>jak;
   int ara[a];
   for(i=0;i<a;i++)
   {
       cin>>ara[i];
   }
   k=1;
   for(i=1;i<=a;i++)
   {
      if(jak[k-1]=='>')
      {
          k+=ara[k-1];
      }
      else if(jak[k-1]=='<')
      {
          k-=ara[k-1];
      }
      if(k>a||k<1)
      {
         flag=1;
         break;
      }
   }
   if(flag==0)
   {
       cout<<"INFINITE";
   }
   else
   {
       cout<<"FINITE";
   }
}