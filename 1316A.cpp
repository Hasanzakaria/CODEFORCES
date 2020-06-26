#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,n,m,j,x,sum;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        sum=0;
        cin>>n>>m;
        for(j=1;j<=n;j++)
        {
            cin>>x;
            sum+=x;
        }
        cout<<min(m,sum)<<"\n";
    }
}