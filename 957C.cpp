#include<bits/stdc++.h>
using namespace std;
int high,ara[100001];
int binary_searchh(int low,int key)
{
   int mid;
   while(low<=high)
   {
     mid=(low+high)/2;
     if(ara[mid]<=key)
     {
         low=mid+1;
     }
     else
     {
         high=mid-1;
     }

   }
   return low;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,m,i,f,t,y;
    double ff,k,l;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
       cin>>ara[i];
    }
    ff=-1;
    for(i=0;i<n-2;i++)
    {
       high=n-1;
       f=ara[i]+m;
       t=binary_searchh(i,f);
       t--;
       y=t-i+1;
       if(y>=3)
       {
         k=(ara[t]-ara[i]);
         l=(ara[t]-ara[i+1]);
         l=l/k;
         ff=max(ff,l);
       }
    }
    if(ff==-1)
    {
        cout<<-1<<endl;
    }
    else
    {
      printf("%.11lf\n",ff);
    }
}