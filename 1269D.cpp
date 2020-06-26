#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,ans=0,l,even=0,odd=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        ans+=(ara[i]/2);
        if(ara[i]%2==1)
        {
            if(i%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    cout<<ans+min(even,odd)<<"\n";

}