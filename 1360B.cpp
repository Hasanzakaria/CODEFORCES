#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,j,minn;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        minn=1e17;
        cin>>a;
        long long int ara[a];
        for(j=0;j<a;j++)
        {
            cin>>ara[j];
        }
        sort(ara,ara+a);
        for(j=0;j<a-1;j++)
        {
            minn=min(minn,ara[j+1]-ara[j]);
        }
        cout<<minn<<"\n";
    }
}