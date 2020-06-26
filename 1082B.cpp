#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,g=0,flag=0,r=0,u,ans=0;
    cin>>n;
    string a;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='G')
        {
            g++;
        }
    }
    for(i=0;i<n;i++)
    {
        if((flag==0||flag==1)&&a[i]=='G')
        {
            r++;
        }
        else if(flag==0&&a[i]=='S')
        {
            flag=1;
            u=r;
        }
        else if(flag==1&&a[i]=='S')
        {
            if(g-r>0)
            {
                ans=max(ans,r+1);
            }
            else
            {
                ans=max(ans,r);
            }
            r=r-u;
            u=r;
        }
    }
    if(g-r>0)
    {
        ans=max(ans,r+1);
    }
    else
    {
        ans=max(ans,r);
    }
    cout<<ans<<"\n";
}