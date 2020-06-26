#include<bits/stdc++.h>
using namespace std;
long long int cou;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,ans=0,t=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n;i++)
    {
        ans+=(ara[i]/3);
        ara[i]%=3;
    }
    for(i=0;i<n;i++)
    {
        if(ara[i]==1)
        {
            cou++;
        }
        else if(ara[i]==2&&cou>0)
        {
            cou--;
            ans++;
        }
        else if(ara[i]==2)
        {
            cou+=2;
            t++;
            if(t==2)
            {
                ans++;
                t=0;
                cou-=3;
            }
        }
    }
    cout<<ans<<"\n";
}