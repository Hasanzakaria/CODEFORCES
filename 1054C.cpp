#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,check1,check2,flag=0,j;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    long long int tak[n];
    for(i=0;i<n;i++)
    {
        cin>>tak[i];
    }
    long long int ans[n];
    for(i=0;i<n;i++)
    {
        ans[i]=n-(ara[i]+tak[i]);
    }
    for(i=0;i<n;i++)
    {
        check1=0;
        check2=0;
        for(j=i-1;j>=0;j--)
        {
            if(ans[j]>ans[i])
            {
                check1++;
            }
        }
        for(j=i+1;j<n;j++)
        {
            if(ans[j]>ans[i])
            {
                check2++;
            }
        }
        if((check1!=ara[i])||(check2!=tak[i]))
        {
           flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
        for(i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
    }
}