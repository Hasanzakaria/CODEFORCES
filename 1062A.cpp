#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n,maxx=0,cou=0,j,k,u,i;
    cin>>n;
    long long int ara[n];
    for(i=0;i<n;i++)
    {
        cin>>ara[i];
    }
    i=0;
    if(ara[0]==1)
    {
        for(i=1;i<n;i++)
        {
            if(ara[i]==ara[i-1]+1)
            {
               cou++;
            }
            else
            {
                break;
            }
        }
    }
    maxx=max(maxx,cou);
    j=n-1;
    cou=0;
    if(ara[n-1]==1000)
    {
        for(j=n-2;j>=0;j--)
        {
            if(ara[j]+1==ara[j+1])
            {
               cou++;
            }
            else
            {
                break;
            }
        }
    }
    maxx=max(maxx,cou);
    cou=1;
    for(k=i+1;k<=j;k++)
    {
        if(ara[k]==ara[k-1]+1)
        {
            cou++;
        }
        else
        {
            if(cou>2)
            {
                maxx=max(maxx,cou-2);
            }
            cou=1;
        }
    }
    maxx=max(maxx,cou-2);
    cout<<maxx<<endl;
}