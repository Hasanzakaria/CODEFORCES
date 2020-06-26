#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,k,r;
    cin>>n;
    k=n/100;
    r=n%100;
    k+=(r/20);
    r=r%20;
    k+=(r/10);
    r=r%10;
    k+=(r/5);
    r=r%5;
    k+=r;
    cout<<k<<endl;



}