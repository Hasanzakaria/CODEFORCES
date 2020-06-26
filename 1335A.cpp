#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int t,i,a;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        if(a%2==0)
        {
            cout<<(a/2)-1;
        }
        else
        {
            cout<<a/2;
        }
        cout<<"\n";
    }
}