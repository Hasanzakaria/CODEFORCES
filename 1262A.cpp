#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        long long int ara[a],jak[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j]>>jak[j];
        }
        sort(jak,jak+a);
        sort(ara,ara+a);
        if(ara[a-1]-jak[0]>=0)
        {
            cout<<ara[a-1]-jak[0]<<"\n";
        }
        else
        {
            cout<<0<<"\n";
        }
    }

}