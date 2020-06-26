#include<iostream>
using namespace std;
int main ()
{
   int a,b,k;
   cin>>a>>b;
   k=a-b;
   if(a==0&&b==0)
   {
       cout<<"NO";
   } 
   else if(k==0||k==1||k==-1)
   {
       cout<<"YES";
   }
   else
   {
       cout<<"NO";
   }     
   
}