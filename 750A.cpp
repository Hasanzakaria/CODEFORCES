#include<iostream>
using namespace std;
int main ()
{
   int a,b,k,i=1,cou=0;
   cin>>a>>b;
   k=240-b;
   for( ; ; )
   {
       k=k-(5*i);
       if(k>=0)
       {
          cou++;
          i++;
       }
       else
       {
           break;
       }
       if(a==cou)
       {
           break;
       }
   }
   cout<<cou;
}