#include<bits/stdc++.h>
using namespace std;
map<int,int>mp,tp;
int main ()
{
    int n,a,k,flag=0,l,i,j;
    cin>>n;
    int ara[n];
    for(i=1;i<=n;i++)
    {
        cin>>ara[i-1];
        mp[ara[i-1]]=1;
    }
    for(i=0;i<n;i++)
    {
        k=ara[i];
        for(j=i+1;j<n;j++)
        {
            k=__gcd(ara[j],k);
            tp[k]=1;
            if(mp[k]==0)
            {
               flag=1;
            }
        }
    }
    if(flag==0)
    {
        for(i=0;i<n;i++)
        {
            if(tp[ara[i]]==0)
            {
               l=i;
               break;
            }
        }
        cout<<n-l<<endl;
        for(i=l;i<n;i++)
        {
            cout<<ara[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        cout<<-1;
    }
}