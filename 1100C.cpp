#include<bits/stdc++.h>
using namespace std;
double pi=3.14159265;
int main ()
{
    double a,b,t;
    cin>>a>>b;
    t=(360/a);
    t=(pi*t)/180;
    t/=2;
    printf("%.7lf\n",((sin(t)/(1-sin(t)))*b));


}