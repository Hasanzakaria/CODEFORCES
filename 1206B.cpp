#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int>mp,cp;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum=0,cou=0,flag=0;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        if(ara[i]>0)
        {
            sum+=ara[i]-1;
        }
        else if(ara[i]<0)
        {
            sum+=(-1-ara[i]);
            cou++;
        }
        else
        {
            sum++;
            flag=1;
        }
    }
    if(cou%2!=0)
    {
        if(flag==0)
        {
            sum+=2;
        }
    }
    cout<<sum<<"\n";
}