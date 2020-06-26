#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
int main ()
{
   ios_base::sync_with_stdio(0);
   int n,i,k,r,t,flag=0,f=0;
   cin>>n;
   int tak[n];
   pair<int,int>ara[n];
   for(i=0;i<n;i++)
   {
       cin>>ara[i].first;
       ara[i].second=i+1;
       tak[i]=i+1;
   }
   sort(ara,ara+n);
   for(i=0;i<n;i++)
   {
       k=i+1;
       if(ara[i].second!=k&&flag==0)
       {
          r=i;
          flag=1;
       }
       else if(ara[i].second!=k&&flag==1)
       {
           t=i;
       }
   }
   for(i=0;i<n;i++)
   {
      swap(ara[i].first,ara[i].second);
   }
   if(flag==0)
   {
       cout<<"yes\n"<<1<<" "<<1;
       goto dhaka;
   }
   reverse(ara+r,ara+t+1);
   for(i=0;i<n;i++)
   {
       if(ara[i].first!=tak[i])
       {
           f=1;
           break;
       }
   }
   if(f==0)
   {
       cout<<"yes\n"<<r+1<<" "<<t+1;
   }
   else
   {
       cout<<"no";
   }
   dhaka:;

}