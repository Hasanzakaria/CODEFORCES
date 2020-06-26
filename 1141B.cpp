#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,i,j,flag=0,cou=0,maxx=-1,u;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    for(j=0;j<n;j++)
    {
        if(ara[j]==1&&flag==0)
        {
           flag=1;
           u=j;
           cou++;
        }
        else if(ara[j]==1)
        {
            cou++;
        }
        else if(ara[j]==0)
        {
            flag=0;
            maxx=max(maxx,cou);
            cou=0;
        }
    }
    j=0;
    if(ara[n-1]==1&&u!=j)
    {
        while(ara[j]==1)
        {
            cou++;
            j++;
        }
        maxx=max(maxx,cou);
    }
    else
    {
        maxx=max(maxx,cou);
    }
    cout<<maxx<<"\n";

}