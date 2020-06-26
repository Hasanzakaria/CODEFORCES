#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,k,flag;
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
            for(k=j+2;k<a;k++)
            {
                if(ara[j]==ara[k])
                {
                   flag=1;
                }
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

}