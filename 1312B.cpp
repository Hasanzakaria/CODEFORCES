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
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        sort(ara,ara+a);
        reverse(ara,ara+a);
        for(j=0;j<a;j++)
        {
            cout<<ara[j]<<" ";
        }
        cout<<"\n";
    }

}