#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int tt,i,a,t,l,sum=0,sum1=0;
    cin>>tt;
    for(i=1;i<=tt;i++)
    {
        cin>>a;
        t=a/2;
        if(t%2==0)
        {
            cout<<"YES\n";
            l=2;
            sum=0;
            for(int j=1;j<=t;j++)
            {
                cout<<l<<" ";
                sum+=l;
                l+=2;
 
            }
            l=1;
            sum1=0;
            for(int j=1;j<t;j++)
            {
                cout<<l<<" ";
                sum1+=l;
                l+=2;
            }
            cout<<sum-sum1<<"\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
 
}