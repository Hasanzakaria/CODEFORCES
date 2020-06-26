#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i;
    cin>>n;
    if(n<=5)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<1<<" "<<2<<endl;
        cout<<2<<" "<<3<<endl;
        cout<<2<<" "<<4<<endl;
        cout<<3<<" "<<5<<endl;
        for(i=6;i<=n;i++)
        {
            cout<<3<<" "<<i<<endl;
        }
    }
    for(i=1;i<n;i++)
    {
        cout<<i<<" "<<i+1<<endl;
    }
}