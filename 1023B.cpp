#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    long long int n,m,k,t;
    cin>>n>>m;
    k=m-1;
    k=k/2;
    if(m-1>=n)
    {
        t=m-1-n;
        k=k-t;
    }
    if(k<0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<k<<endl;
    }


}