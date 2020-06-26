#include<bits/stdc++.h>
using namespace std;
int main ()
{
   long long int n,m,i,x,y,f,l,t=0;
   double ff,ll;
   scanf("%I64d %I64d",&n,&m);
   ll=n;
   for(i=1;i<=m;i++)
   {
       scanf("%I64d %I64d",&x,&y);
       t+=(x*n);
       if(y>0)
       {
           f=n-1;
           f=(f*(f+1))/2;
           t+=(y*(f));
       }
       else
       {
           f=n/2;
           l=n-f-1;
           f=(f*(f+1))/2;
           t+=(y*f);
           l=(l*(l+1))/2;
           t+=(y*l);
       }
   }
   ff=t/ll;
   printf("%.9lf",ff);
}