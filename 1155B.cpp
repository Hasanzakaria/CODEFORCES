#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,cou=0,t;
    cin>>n;
    string a;
    cin>>a;
    for(i=0;i<=n-11;i++)
    {
        if(a[i]=='8')
        {
            cou++;
        }
    }
    t=(n-11)/2;
    if(cou-t>0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

}