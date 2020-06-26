#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,ans,u,j;
    string b;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        ans=0;
        u=0;
        for(j=0;j<a;j++)
        {
            if(b[j]=='1')
            {
               ans+=2;
            }
            else
            {
                ans++;
            }
        }
        for(j=0;j<a;j++)
        {
            if(b[j]=='1')
            {
               u=j+1;
            }
        }
        ans=max(ans,2*u);
        u=a+1;
        for(j=a-1;j>=0;j--)
        {
           if(b[j]=='1')
            {
               u=j+1;
            }
        }
        ans=max(ans,2*(a-u+1));
        cout<<ans<<"\n";
    }
}