#include<bits/stdc++.h>
using namespace std;
long long int factorial[250001];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,i,sum=0,f,l,r,y;
    cin>>n>>m;
    factorial[0]=1;
    for(i=1;i<=n;i++)
    {
        factorial[i]=((factorial[i-1]%m)*(i%m))%m;
    }
    for(i=1;i<=n;i++)
    {
       f=n-i+1;
       l=factorial[i];
       r=n-i+1;
       r=factorial[r];
       y=((f%m)*(l%m))%m;
       y=((y%m)*(r%m))%m;
       sum=((sum%m)+(y%m))%m;
    }
    cout<<sum<<"\n";
}