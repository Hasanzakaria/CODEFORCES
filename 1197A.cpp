#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,j,r,f;
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>a;
       long long int ara[a];
       for(j=0;j<a;j++)
       {
           cin>>ara[j];
       }
       sort(ara,ara+a);
       r=ara[a-2]-1;
       f=a-2;
       cout<<min(r,f)<<"\n";

    }
}