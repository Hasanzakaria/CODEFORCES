#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,c,d,t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d;
        cout<<b<<" "<<c<<" "<<min(b+c-1,d)<<"\n";
    }

}