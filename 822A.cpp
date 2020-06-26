#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long long int a,b,k,t=1,i;
    cin>>a>>b;
    k=min(a,b);
    for(i=1;i<=k;i++)
    {
        t=t*i;
    }
    cout<<t<<endl;


}