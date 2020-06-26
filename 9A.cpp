#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    return gcd(b,a%b);
}
int main ()
{
    int n,m,k,r,f;
    cin>>n>>m;
    k=max(n,m);
    r=6-k+1;
    f=gcd(r,6);
    r/=f;
    cout<<r<<"/"<<6/f;

}