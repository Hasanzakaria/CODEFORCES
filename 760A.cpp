#include<iostream>
using namespace std;
int main ()
{
   int a,b,k,t,f,r,cou=1;
   cin>>a>>b;
   if(a==1)
   {
       k=31;
   }
   else if(a==2)
   {
       k=28;
   }
   else if(a==3)
   {
       k=31;
   }
   else if(a==4)
   {
       k=30;
   }
   else if(a==5)
   {
       k=31;
   }
   else if(a==6)
   {
       k=30;
   }
   else if(a==7)
   {
       k=31;
   }
   else if(a==8)
   {
       k=31;
   }
   else if(a==9)
   {
       k=30;
   }
   else if(a==10)
   {
       k=31;
   }
   else if(a==11)
   {
       k=30;
   }
   else if(a==12)
   {
       k=31;
   }
   t=7-b+1;
   f=k-t;
   r=f/7;
   cou+=r;
   if(f%7!=0)
   {
       cou++;
   }
   cout<<cou;


}