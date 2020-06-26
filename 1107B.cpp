#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,i;
    long long int a,b,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        k=((a-1)*9)+b;
        cout<<k<<"\n";
    }

}