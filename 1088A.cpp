#include<bits/stdc++.h>
using namespace std;
int main ()
{
   ios_base::sync_with_stdio(0);
   int x,i,j,k,l,flag=0;
   cin>>x;
   for(i=1;i<=x;i++)
   {
       for(j=1;j<=x;j++)
       {
           if(i%j==0&&i*j>x&&i/j<x)
           {
               flag=1;
               k=i;
               l=j;
           }
       }
   }
   if(flag==1)
   {
       cout<<k<<" "<<l<<endl;
   }
   else
   {
       cout<<-1<<endl;
   }


}