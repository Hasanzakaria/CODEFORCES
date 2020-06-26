#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,c,l,r,j,x,y;
    cin>>t;
    for(i=1;i<=t;i++)
    {
       cin>>a>>b>>c;
       l=b;
       r=b;
       for(j=1;j<=c;j++)
       {
           cin>>x>>y;
           if(l>=x&&r<=y)
           {
               l=x;
               r=y;
           }
           else if(y>=l&&x<l)
           {
               l=x;
           }
           else if(x<=r&&y>r)
           {
               r=y;
           }
       }
       cout<<r-l+1<<"\n";
    }
}