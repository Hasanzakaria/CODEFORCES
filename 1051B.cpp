#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,i;
    cin>>a>>b;
    cout<<"YES\n";
    for(i=a;i<=b;i+=2)
    {
        cout<<i<<" "<<i+1<<"\n";
    }
}