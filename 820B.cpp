#include<bits/stdc++.h>
using namespace std;
int main ()
{
   long long int a,b;
   float k,r,t,e,q,l,p=0;
   cin>>a>>b;
   k=(a-2)*180;
   k=k/a;
   r=k/2.0;
   l=k/3.0;
   t=k-b;
   e=r-b;
   l=l-b;
   if(t<p)
   {
       t=-t;
   }
   if(e<p)
   {
      e=-e;
   }
   if(l<p)
   {
       l=-l;
   }
   q=min(t,e);
   q=min(q,l);
   if(q==t)
   {
       cout<<2<<" "<<1<<" "<<a<<endl;
   }
   else if(q==e)
   {
       if(a%2==0)
       {
         cout<<1<<" "<<a<<" "<<2<<endl;
       }
       else
       {
           cout<<1<<" "<<2<<" "<<a<<endl;
       }
   }
   else
   {
       if(a%2==0)
       {
           cout<<1<<" "<<2<<" "<<a<<endl;
       }
       else
       {
           cout<<1<<" "<<a<<" "<<2<<endl;
       }
   }



}