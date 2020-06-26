#include<iostream>
using namespace std;
int main ()
{
    int n,m;
    cin>>n>>m;
    if(n>=2*m)
    {
        cout<<m;
    }
    else if(m>=2*n)
    {
        cout<<n;
    }
    else
    {
        cout<<(n+m)/3;
    }
}