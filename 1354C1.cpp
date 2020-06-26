#include<bits/stdc++.h>
using namespace std;
double pi=3.141592653;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i;
    double n,ans,f,u;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&n);
        f=180/(2*n);
        u=(f*pi)/180;
        printf("%.8lf\n",1/tan(u));
    }
}