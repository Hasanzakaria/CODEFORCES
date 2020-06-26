#include<bits/stdc++.h>
using namespace std;
long long int n;
long long int bisection()
{
    long long int low=1,high,mid,vasya,petya,x,g,f;
    high=n;
    f=n/2;
    if(n%2==1)
    {
        f++;
    }
    while(low<=high)
    {
        vasya=0;
        petya=0;
        x=n;
        mid=(low+high)/2;
        while(x)
        {
            if(x<mid)
            {
                vasya+=x;
                x=0;
            }
            else
            {
                vasya+=mid;
                x-=mid;
            }
            g=x/10;
            petya+=g;
            x-=g;
        }
        if(vasya>=f)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return low;
}
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    long long int ans;
    ans=bisection();
    cout<<ans<<"\n";
}