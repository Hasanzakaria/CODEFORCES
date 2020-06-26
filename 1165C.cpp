#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,t=0;
    cin>>n;
    string a,b;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(t%2==0)
        {
            b+=a[i];
            t++;
        }
        else
        {
            if(b[t-1]!=a[i])
            {
                b+=a[i];
                t++;
            }
        }
    }
    if(t%2==0)
    {
       cout<<n-t<<"\n";
       cout<<b<<"\n";
    }
    else
    {
        cout<<n-(t-1)<<"\n";
        for(i=0;i<t-1;i++)
        {
            cout<<b[i];
        }
    }


}