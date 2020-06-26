#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,x,y,z,sum;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x>>y>>z;
        sum=x+y+z;
        cout<<sum/2<<"\n";
    }

}