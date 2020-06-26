#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    string a,b,l;
    long long int n,i,o=0,z=0,ans,f=0;
    cin>>n;
    cin>>a>>b;
    for(i=0;i<n;i++)
    {
        if(a[i]=='1'||b[i]=='1')
        {
            l+='1';
        }
        else
        {
            l+='0';
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]=='1')
        {
          o++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(l[i]=='0')
        {
          z++;
          mp[i]=1;
        }
    }
    ans=o*z;
    for(i=0;i<n;i++)
    {
        if(a[i]=='0'&&mp[i]==0)
        {
            f++;
        }

    }
    for(i=0;i<n;i++)
    {
        if(l[i]=='1'&&b[i]=='0')
        {
            ans+=f;
        }
    }
    cout<<ans<<endl;

}