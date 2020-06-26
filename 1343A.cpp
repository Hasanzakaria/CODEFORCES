#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,n,p,l,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        p=3;
        l=2;
        ans=2;
        cin>>n;
        while(n%p!=0)
        {
            l*=2;
            p+=l;
            ans++;
        }
        cout<<n/p<<"\n";
    }
 
}