#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,j,k,f,i,l,cou=0;
    cin>>n;
    long long int ara[n];
    for(j=0;j<n;j++)
    {
        cin>>ara[j];
    }
    k=ara[0];
    for(j=1;j<n;j++)
    {
        k=__gcd(k,ara[j]);
    }
    f=sqrt(k);
    for(i=1;i<=f;i++)
    {
        if(k%i==0)
        {
           l=k/i;
           if(l==i)
           {
               cou++;
               continue;
           }
           cou+=2;
        }
    }
    cout<<cou<<"\n";
}