#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int ara[3];
        for(j=0;j<3;j++)
        {
            cin>>ara[j];
        }
        sort(ara,ara+3);
        if(ara[0]+ara[1]==ara[2]-1)
        {
            cout<<"Yes\n";
        }
        else if(ara[0]+ara[1]<ara[2]-1)
        {
            cout<<"No\n";
        }
        else
        {
            if(ara[1]-ara[0]>ara[2])
            {
                cout<<"No\n";
            }
            else
            {
                cout<<"Yes\n";
            }
        }
    }
}