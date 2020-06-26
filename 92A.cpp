#include<iostream>
using namespace std;
int main ()
{
    int n,m,k,r,i;
    cin>>n>>m;
    k=(n*(n+1))/2;
    r=m%k;
    for(i=1;i<=n;i++)
    {
        r-=i;
        if(r<0)
        {
            r+=i;
            break;
        }
    }
    cout<<r;
}