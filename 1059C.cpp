#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t=1,i,r;
    double n;
    cin>>n;
    while(ceil(n/2.0)!=0)
    {
        if(n==1)
        {
            cout<<t<<"\n";
            break;
        }
        else if(n==2)
        {
            cout<<t<<" "<<2*t<<"\n" ;
            break;
        }
        else if(n==3)
        {
            cout<<t<<" "<<t<<" "<<3*t<<"\n";
            break;
        }
        r=ceil(n/2);
        for(i=1; i<=r; i++)
        {
            cout<<t<<" ";
        }
        n-=r;
        t*=2;
    }

}