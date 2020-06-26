#include<bits/stdc++.h>
using namespace std;
long long int gcdExtended(long long int a,long long int b,long long  int *x,long long  int *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }

    long long int x1, y1; // To store results of recursive call
    long long int gcd = gcdExtended(b%a, a, &x1, &y1);

    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int a,b,c,x,y,t,r;
    cin>>a>>b>>c;
    t=gcdExtended(a,b,&x,&y);
    if(c%t==0)
    {
        r=(-c)/t;
        x*=r;
        y*=r;
        if(x>=-5e18&&x<=5e18&&y>=-5e18&&y<=5e18)
        {
           cout<<x<<" "<<y<<"\n";
        }
        else
        {
            cout<<-1<<"\n";
        }
    }
    else
    {
      cout<<-1<<"\n";
    }

}