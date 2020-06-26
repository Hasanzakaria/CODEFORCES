#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,i,flag=0,k,t,g=0;
    string a,b;
    cin>>n>>m;
    cin>>a>>b;
    for(i=0; i<n; i++)
    {
        if(a[i]!=b[i]&&a[i]!='*')
        {
            flag=1;
            break;
        }
        else if(a[i]=='*')
        {
            k=i;
            g=1;
            break;
        }
        mp[i]=1;
    }
    if(g==0)
    {
        if(n!=m)
        {
            flag=1;
        }
    }
    else
    {
        t=m-1;
        for(i=n-1; i>k; i--)
        {
            if(t<0)
            {
                flag=1;
                break;
            }
            if(mp[t]==1)
            {
                flag=1;
                break;
            }
            if(a[i]!=b[t])
            {
                flag=1;
            }
            t--;
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}