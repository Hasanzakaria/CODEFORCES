#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,l,r,k=1,i,summin=0,summax=0;
    cin>>n>>l>>r;
    for(i=1;i<=l;i++)
    {
        summin+=k;
        k*=2;
    }
    summin+=((n-l)*1);
    k=1;
    for(i=1;i<=r;i++)
    {
        summax+=k;
        k*=2;
    }
    k/=2;
    summax+=((n-r)*k);
    cout<<summin<<" "<<summax<<"\n";

}