#include<bits/stdc++.h>
using namespace std;
long long int y;
void quadratic (double a,double b,double c)
{
    double f;
    f=(-b+sqrt((b*b)-(4*a*c)))/2*a;
    y=ceil(f);
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,l;
    cin>>n;
    n=abs(n);
    quadratic(1,1,-(2*n));
    for(i=y; ;i++)
    {
        l=(i*(i+1))/2;
        l-=n;
        if(l%2==0)
        {
            cout<<i<<"\n";
            break;
        }
    }
}