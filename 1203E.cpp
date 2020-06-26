#include<bits/stdc++.h>
using namespace std;
long long int ara[150002];
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,k,cou=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;
        ara[k]++;
    }
    for(i=1;i<=150000;i++)
    {
        if(i==1)
        {
            if(ara[i]>1)
            {
                ara[i+1]++;
            }
        }
        else if(ara[i]>0)
        {
            if(ara[i-1]==0)
            {
                ara[i-1]++;
                ara[i]--;
            }
            if(ara[i]>1)
            {
                ara[i+1]++;
            }
        }
    }
    for(i=1;i<=150001;i++)
    {
        if(ara[i])
        {
           cou++;
        }
    }
    cout<<cou<<"\n";
}