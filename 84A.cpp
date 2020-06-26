#include<iostream>
using namespace std;
int main ()
{
    int n,k;
    cin>>n;
    k=n/2;
    k*=2;
    k+=(n-(n/2));
    cout<<k;
}