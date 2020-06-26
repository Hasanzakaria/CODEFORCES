#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,ans,e,j,flag;
    string b;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ans=0;
        flag=0;
        cin>>a>>b;
        for(j=0;j<a;j++)
        {
            if(b[j]=='A'&&flag==0)
            {
                flag=1;
                e=j;
            }
            else if(b[j]=='A'&&flag==1)
            {
                ans=max(ans,j-e-1);
                e=j;
            }
        }
        if(flag)
        {
            ans=max(ans,a-e-1);
        }
        cout<<ans<<"\n";
    }
}