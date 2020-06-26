#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double a,b,ans;
    scanf("%lf %lf",&a,&b);
    ans=(b*b)-(a*a);
    ans=ans/(2*a);
    printf("%.8lf\n",ans);


}