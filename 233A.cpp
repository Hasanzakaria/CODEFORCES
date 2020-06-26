#include<iostream>
using namespace std;
int main ()
{
   int a,i,j;
   cin>>a;
   if(a%2!=0)
   {
       cout<<-1;
   }
   else
   {
      for(i=2,j=1;i<=a&&j<=a;i+=2,j+=2)
      {
         cout<<i<<" "<<j<<" ";
      }
   }
}