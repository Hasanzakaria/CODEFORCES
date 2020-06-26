#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,l;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        long long int ara[2*a];
        for(j=0;j<2*a;j++)
        {
            cin>>ara[j];
        }
        sort(ara,ara+2*a);
        cout<<ara[a]-ara[a-1]<<"\n";
    }

}