#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(c<=b)
    {
        cout<<c<<endl;
    }
    else if(c>a)
    {
        cout<<b-(c-a)<<endl;
    }
    else
    {
        cout<<b<<endl;
    }
}