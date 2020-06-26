#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,maxx=0,i;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<ara[i]+maxx<<" ";
        maxx=max(maxx,ara[i]+maxx);
    }
    cout<<"\n";

}