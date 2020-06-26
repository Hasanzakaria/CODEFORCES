#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,sum=0,flag1=0,flag2=0,p;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
        sum+=abs(ara[i]);
        if(ara[i]<0)
        {
            flag1=1;
        }
        else
        {
            flag2=1;
        }
    }
    sort(ara,ara+n);
    if(n==1)
    {
        cout<<ara[0]<<"\n";
    }
    else if(flag1==1&&flag2==1)
    {
        cout<<sum<<"\n";
    }
    else if(flag1==1)
    {
        p=sum-abs(ara[n-1])-abs(ara[n-2])+(ara[n-1]-ara[n-2]);
        cout<<p<<"\n";
    }
    else
    {
        p=sum-abs(ara[0])-abs(ara[1])+(ara[1]-ara[0]);
        cout<<p<<"\n";
    }
 
}