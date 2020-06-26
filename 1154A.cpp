#include<bits/stdc++.h>
using namespace std;
int main ()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   long long int ara[4],i;
   for(i=0;i<4;i++)
   {
       cin>>ara[i];
   }
   sort(ara,ara+4);
   for(i=0;i<3;i++)
   {
       cout<<ara[3]-ara[i]<<" ";
   }
}