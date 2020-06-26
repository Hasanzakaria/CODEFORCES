#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t,i,n,a,b,j,cou;
    cin>>t;
    char ch;
    string ans;
    for(i=1;i<=t;i++)
    {
       ch='a';
       cou=0;
       cin>>n>>a>>b;
       for(j=1;j<=b;j++)
       {
         ans+=ch;
         ch++;  
       }
       for(j=1;j<=a-b;j++)
       {
           ans+='a';
       }
       for(j=1;j<=n-a;j++)
       {
           ans+=ans[cou];
           cou++;
       }
       cout<<ans<<"\n";
       ans.clear();     
    }
}