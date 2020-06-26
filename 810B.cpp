#include<iostream>
#include<queue>
using namespace std;
int main ()
{
   priority_queue<long long int>p;
   long long int a,b,i,c=0,d,e,k,r=0;
   cin>>a>>b;
   for(i=1;i<=a;i++)
   {
       cin>>d>>e;
       c+=min(d,e);
       k=min(2*d,e)-min(d,e);
       p.push(k);
   }
   while(!p.empty())
   {
       if(r==b)
       {
           break;
       }
       c+=p.top();
       p.pop();
       r++;
   }
   cout<<c<<endl;

}