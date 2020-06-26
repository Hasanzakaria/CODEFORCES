#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    int n,i;
    cin>>n;
    int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    cout<<n+1<<endl;
    cout<<2<<" "<<n<<" "<<1<<endl;
    cout<<1<<" "<<n<<" "<<100000<<endl;
    for(i=0;i<n-1;i++)
    {
       cout<<2<<" "<<i+1<<" "<<100000-i<<endl;
    }

}