#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,f,flag,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        flag=0;
        cin>>a;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        for(j=0;j<a;j++)
        {
            f=j+ara[j];
            if(f<0)
            {
                k=-f;
                k/=a;
                k++;
                f+=(k*a);
            }
            f%=a;
            if(mp[f]==1)
            {
               flag=1;
            }
            mp[f]=1;
        }
        if(flag)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
        mp.clear();
    }
 
 
 
}