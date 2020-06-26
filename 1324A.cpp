#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,a,j,maxx,t,flag;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        maxx=-1;
        flag=0;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
            maxx=max(ara[j],maxx);
        }
        for(j=0;j<a;j++)
        {
            t=maxx-ara[j];
            if((t%2)!=0)
            {
               flag=1;
            }
        }
        if(flag)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }

}