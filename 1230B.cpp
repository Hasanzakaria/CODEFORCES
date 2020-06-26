#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,k,i,u;
    cin>>n>>k;
    u=k;
    string ara;
    cin>>ara;
    for(i=0;i<n;i++)
    {
        if(k==0)
        {
            break;
        }
        if(i==0)
        {
            if(ara[i]!='1')
            {
                ara[i]='1';
                k--;
            }
        }
        else
        {
            if(ara[i]!='0')
            {
                ara[i]='0';
                k--;
            }
        }
    }
    if(n==1&&u==1)
    {
        ara[0]='0';
    }
    cout<<ara<<"\n";


}