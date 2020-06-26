#include<bits/stdc++.h>
using namespace std;
long long int n,m;
long long int bisection(long long int low,long long int high)
{
   long long int mid,p,r;
   while(low<=high)
   {
       r=0;
       mid=(low+high)/2;
       p=1;
       while((mid/p)!=0)
       {
           r+=(mid/p);
           p=p*m;
       }
       if(r>=n)
       {
          high=mid-1;
       }
       else
       {
           low=mid+1;
       }
   }
   return low;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int k;
    cin>>n>>m;
    k=bisection(1,n);
    cout<<k<<"\n";
}