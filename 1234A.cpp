#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,k,sum,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        sum=0;
        for(j=1;j<=a;j++)
        {
            cin>>k;
            sum+=k;
        }
        ans=sum/a;
        if(sum%a!=0)
        {
            ans++;
        }
        cout<<ans<<"\n";
    }
}