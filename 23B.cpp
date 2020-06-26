#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>a;
       if(a<=2)
       {
           cout<<0<<"\n";
       }
       else
       {
           cout<<a-2<<"\n";
       }
    }
}