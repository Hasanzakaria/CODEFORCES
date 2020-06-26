#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,l,k;
    cin>>n;
    long long int ara[n/2],ans[n];
    for(i=0;i<n/2;i++)
    {
       cin>>ara[i];
    }
    ans[0]=0;
    ans[n-1]=ara[0];
    for(i=1;i<n/2;i++)
    {
        k=ara[i]-ans[i-1];
        if(k>ans[n-i])
        {
            l=ara[i]-ans[n-i];
            ans[n-i-1]=ans[n-i];
            ans[i]=l;
        }
        else
        {
            ans[i]=ans[i-1];
            ans[n-i-1]=k;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }

}