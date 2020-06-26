#include<bits/stdc++.h>
using namespace std;
int main ()
{
   long long int n,i,x,y,t=0,cou=0;
   cin>>n;
   long long int ara[n],sum[n];
   for(i=0;i<n;i++)
   {
       cin>>ara[i];
   }
   sum[0]=ara[0];
   for(i=1;i<n;i++)
   {
       sum[i]=sum[i-1]+ara[i];
   }
   if(sum[n-1]%3==0)
   {
       x=sum[n-1]/3;
       y=2*x;
       for(i=0;i<n-1;i++)
       {
           if(sum[i]==y)
           {
               cou+=t;
           }
           if(sum[i]==x)
           {
               t++;
           }
       }
   }
   cout<<cou<<endl;
}