#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,nn=0,z=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s[i]=='z')
        {
            z++;
        }
        else if(s[i]=='n')
        {
            nn++;
        }
    }
    for(i=1;i<=nn;i++)
    {
        cout<<1<<" ";
    }
    for(i=1;i<=z;i++)
    {
        cout<<0<<" ";
    }
}