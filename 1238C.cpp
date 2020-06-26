#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int t,i,a,b,j,cou;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        cou=0;
        long long int ara[b];
        for(j=0;j<b;j++)
        {
            cin>>ara[j];
        }
        for(j=1;j<b-1;j++)
        {
            if(ara[j]==ara[j+1]+1)
            {
                j++;
            }
            else
            {
               cou++;
            }
        }
        if(j==b-1)
        {
            if(ara[j]!=1)
            {
                cou++;
            }
        }
        cout<<cou<<"\n";
    }
}