#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string c;
    cin>>c;
    long long int k,i;
    k=c.size();
    for(i=0;i<k-1;i++)
    {
        if(c[i]!=c[i+1])
        {
            cout<<1<<" ";
        }
        else
        {
            cout<<0<<" ";
        }
    }
    if(c[k-1]=='a')
    {
        cout<<1<<" ";
    }
    else
    {
        cout<<0<<" ";
    }

}