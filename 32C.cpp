#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,m,s,l,p,k,r,ans,temp;
    cin>>n>>m>>s;
    l=(m-1)/s;
    l++;
    p=(m-1)%s;
    p++;
    k=l*p;
    r=(n-1)/s;
    r++;
    ans=k*r;
    temp=(n-1)%s;
    temp++;
    ans*=temp;
    cout<<ans<<"\n";


}