#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
   ios_base::sync_with_stdio(0);
   int a,i,k;
   cin>>a;
   int ara[a];
   for(i=0;i<a;i++)
   {
       cin>>ara[i];
   }
   k=ara[0];
   for( ; ; )
   {
       sort(ara+1,ara+a);
       if(ara[a-1]>=ara[0])
       {
           ara[0]++;
           ara[a-1]--;
       }
       else
       {
           break;
       }
   }
   cout<<ara[0]-k;



}