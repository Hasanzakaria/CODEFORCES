#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,k,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ans=0;
        cin>>a>>b;
        k=abs(a-b);
        ans+=(k/5);
        k%=5;
        ans+=(k/2);
        k%=2;
        ans+=(k/1);
        cout<<ans<<"\n";
    }

}